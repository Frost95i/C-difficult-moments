#include <iostream>
#include <string>
#include <optional>
#include <tuple>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Person
{
    string firstname;
    string lastname;
    optional<string> patronymic;
};

optional<string> getOptionalStr(string& s)
{
    if (s == "")
        return nullopt;

    return s;
}

ostream& operator<<(ostream& out, const Person& p)
{
    out << setw(20) << p.firstname << setw(20) << p.lastname;

    if (p.patronymic.has_value())
    {
        out << setw(20) << p.patronymic.value();
    }
    else
    {
        out << setw(20);
    }

    return out;
}

bool operator<(const Person& p1, const Person& p2)
{
    string patr1 = p1.patronymic.value_or("");
    string patr2 = p2.patronymic.value_or("");

    return tie(p1.firstname, p1.lastname, patr1)
        < tie(p2.firstname, p2.lastname, patr2);
}

bool operator==(const Person& p1, const Person& p2)
{
    string patr1 = p1.patronymic.value_or("");
    string patr2 = p2.patronymic.value_or("");

    return tie(p1.firstname, p1.lastname, patr1)
        == tie(p2.firstname, p2.lastname, patr2);
}

struct PhoneNumber
{
    int country_code;
    int city_code;
    string number;
    optional<int> additional_number;
};

optional<int> getOptionalInt(string& s)
{
    if (s == "")
        return nullopt;

    return stoi(s);
}

ostream& operator<<(ostream& out, const PhoneNumber& p)
{
    out << setw(3) << '+' << p.country_code << '(' << p.city_code << ')' << p.number;

    if (p.additional_number.has_value())
    {
        out << ' ' << p.additional_number.value();
    }

    return out;
}

class PhoneBook
{
private:
    vector<pair<Person, PhoneNumber>> m_data;
public:
    PhoneBook(ifstream& file)
    {
        if (!file)
        {
            cout << "Не удаётся открыть файл!" << endl;
            exit(-1);
        }

        for (string line; getline(file, line);)
        {
            stringstream str(line);
            vector<string> rowData;

            for (string s; getline(str, s, ';');)
            {
                rowData.push_back(s);
            }

            pair<Person, PhoneNumber> entry;

            for (size_t i = 0; i < rowData.size(); ++i)
            {
                switch (i)
                {
                case 0:
                    entry.first.firstname = rowData[i];
                    break;
                case 1:
                    entry.first.lastname = rowData[i];
                    break;
                case 2:
                    entry.first.patronymic = getOptionalStr(rowData[i]);
                    break;
                case 3:
                    entry.second.country_code = stoi(rowData[i]);
                    break;
                case 4:
                    entry.second.city_code = stoi(rowData[i]);
                    break;
                case 5:
                    entry.second.number = rowData[i];
                    break;
                case 6:
                    entry.second.additional_number = getOptionalInt(rowData[i]);
                    break;
                }
            }

            m_data.push_back(entry);
        }
    }

    friend ostream& operator<<(ostream& out, const PhoneBook& pb)
    {
        for (const auto& [first, second] : pb.m_data)
        {
            out << first << ' ' << second << endl;
        }

        return out;
    }

    void SortByName()
    {
        sort(m_data.begin(), m_data.end(),
            [](const pair<Person, PhoneNumber>& p1,
                const pair<Person, PhoneNumber>& p2)
            {
                if (p1.first.firstname != p2.first.firstname)
                {
                    return p1.first.firstname < p2.first.firstname;
                }
                else if (p1.first.lastname != p2.first.lastname)
                {
                    return p1.first.lastname < p2.first.lastname;
                }
                else
                {
                    return p1.first.patronymic < p2.first.patronymic;
                }
            });
    }

    void SortByPhone()
    {
        sort(m_data.begin(), m_data.end(),
            [](const pair<Person, PhoneNumber>& p1,
                const pair<Person, PhoneNumber>& p2)
            {
                if (p1.second.country_code != p2.second.country_code)
                {
                    return p1.second.country_code < p2.second.country_code;
                }
                else if (p1.second.city_code != p2.second.city_code)
                {
                    return p1.second.city_code < p2.second.city_code;
                }
                else if (p1.second.number != p2.second.number)
                {
                    return p1.second.number < p2.second.number;
                }
                else
                {
                    return p1.second.additional_number < p2.second.additional_number;
                }
            });
    }

    pair<string, PhoneNumber> GetPhoneNumber(const string& firstname)
    {
        PhoneNumber searchPhone;
        int count = 0;

        for_each(m_data.begin(), m_data.end(), [&](const auto& entry)
            {
                if (entry.first.firstname == firstname)
                {
                    searchPhone = entry.second;
                    ++count;
                }
            });

        switch (count)
        {
        case 0:
            return make_pair("not found", searchPhone);
        case 1:
            return make_pair("", searchPhone);
        default:
            return make_pair("found more than 1", searchPhone);
        }
    }

    void ChangePhoneNumber(const Person& p, const PhoneNumber& pn)
    {
        auto entry = find_if(m_data.begin(), m_data.end(), [&](const auto& entry)
            {
                return entry.first == p;
            });

        if (entry != m_data.end())
        {
            entry->second = pn;
        }
    }
};

int main()
{
    ifstream file("PhoneBook.txt");
    PhoneBook book(file);
    cout << book;

    cout << "------SortByPhone-------" << endl;
    book.SortByPhone();
    cout << book;

    cout << "------SortByName--------" << endl;
    book.SortByName();
    cout << book;

    cout << "-----GetPhoneNumber-----" << endl;
    // лямбда функция, которая принимает фамилию и выводит номер телефона этого     человека, либо строку с ошибкой
    auto print_phone_number = [&book](const string& surname)
    {
        cout << surname << "\t";
        auto answer = book.GetPhoneNumber(surname);
        if (get<0>(answer).empty())
            cout << get<1>(answer);
        else
            cout << get<0>(answer);
        cout << endl;
    };

    // вызовы лямбды
    print_phone_number("Ivanov");
    print_phone_number("Petrov");

    cout << "----ChangePhoneNumber----" << endl;
    book.ChangePhoneNumber(Person
        { "Kotov", "Vasilii", "Eliseevich" }, PhoneNumber
        { 7, 123, "15344458", nullopt });
    book.ChangePhoneNumber(Person
        { "Mironova", "Margarita", "Vladimirovna" }, PhoneNumber
        { 16, 465, "9155448", 13 });
    cout << book;

    return 0;
}
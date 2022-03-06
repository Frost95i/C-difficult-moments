#pragma once

#include <iostream>
#include <iterator>
#include <string>
#include <unordered_set>
#include <queue>
#include <set>

using namespace  std;


void exercise_2()
{
    cout << endl << "¬ведите текст : " << endl;
    const auto strCompare = [](const string& lhs, const string& rhs) {
         return lhs.size() < rhs.size();
    };

    multiset<string, decltype(strCompare)> sentences(strCompare);
    string sentence;
    while (getline(cin, sentence) && !sentence.empty()) {
        typename string::size_type posStart{}, posEnd{};
        while (posStart != sentence.npos && posEnd != sentence.npos) {
            posEnd = sentence.find_first_of(".!?", posStart);
            sentences.insert(sentence.substr(posStart, posEnd - posStart));
            posStart = sentence.find_first_not_of(" .!?", posEnd);
        }
    }
    sentences.erase(string());
    for (auto& str : sentences) {
        cout << str << endl;
    }

    }
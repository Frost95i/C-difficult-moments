/*
 * exercise_3.cpp
 *
 *  Created on: 15 окт. 2021 г.
 *      Author: alexander
 */

#include "exercise_3.hpp"
#include <numeric>

void exercise_3()
{
    exercise_2::FullName fn;
    fn.set_name("Alexander");
    fn.set_surname("Zhirov");
    fn.set_patronymic("Alexandrovich");

    exercise_2::Student s;
    *s.mutable_name() = fn;
    s.add_grades(5);
    s.add_grades(2);
    s.add_grades(4);
    s.add_grades(3);
    s.add_grades(4);
    s.add_grades(3);
    s.add_grades(4);
    s.add_grades(3);
    s.set_avg_score(std::accumulate(s.grades().begin(), s.grades().end(), 0) / s.grades().size());

    SG::StudentsGroup sg;
    sg.add_student(s);
    sg.Save();

    SG::StudentsGroup new_sg;
    new_sg.Open();
    std:: cout << new_sg.GetAllInfo(fn) << std::endl;
}


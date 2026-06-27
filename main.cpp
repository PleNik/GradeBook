//Пример 5
//Включение класса GradeBook из GradeBook.h в главную программу

#include <iostream>

#include "GradeBook.h"

//функция main начинает исполнение программы
int main()
{
    //создать 2 объекта класса GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Ivanov Victor");
    GradeBook gradeBook2("CS102 C++ Data Structures", "Petrov Pavel");

    //вывести исходное значение courseName для каждого объекта
    std::cout<<"gradeBook1's initial course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's initial course name is: "
        << gradeBook2.getCourseName() << std::endl;

    //модифицировать courseName для gradeBook1 корректной строкой
    gradeBook1.setCourseName("CS101 C++ Programming");

    //вывести courseName для каждого объекта
    std::cout<<"\ngradeBook1's initial course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's initial course name is: "
        << gradeBook2.getCourseName() << std::endl;
    std::cout<<std::endl;

    //вывести приветствие для каждого объекта
    gradeBook1.displayMessage();
    std::cout<<std::endl;
    gradeBook2.displayMessage();


    return 0;
}

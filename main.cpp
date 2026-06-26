//Пример 5
//Включение класса GradeBook из GradeBook.h в главную программу

#include <iostream>

#include "GradeBook.h"

//функция main начинает исполнение программы
int main()
{
    //создать 2 объекта класса GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    //вывести исходное значение courseName для каждого объекта
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();


    return 0;
}

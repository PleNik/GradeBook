//Пример 12
//В метод void inputGrades() добавлен расчет средней оценки класса. Вес оценки 'A' - 4 пункта, оценки 'B' - 3 пункта и т.д.

#include <iostream>

#include "GradeBook.h"

//функция main начинает исполнение программы
int main()
{
    //создать объект класса GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Ivanov Victor");

    //вывести приветствие
    gradeBook1.displayMessage();

    //прочитать вводимые оценки
    gradeBook1.inputGrades();

    //вывести отчет по оценкам
    gradeBook1.displayGradeReport();


    return 0;
}

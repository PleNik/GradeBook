//Пример 11
//Новая версия класса просит пользователя ввести ряд буквенных оценок (метод void inputGrades())
//и затем выводит сводку числа студентов, получивших каждую из возможных оценок
//(метод *void displayGradeReport()*). Введены дополнительные поля класса:
//int aCount, int bCount, int cCount, int dCount, int fCount - числа оценок в каждой категории A, B, C, D, F.

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

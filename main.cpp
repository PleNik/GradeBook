//Пример 13
//Произведена модификация класса, включая в него определяемую пользователем
//функцию maximum, которая находит и возвращает наибольшее из трех целых значений.

#include "GradeBook.h"

//функция main начинает исполнение программы
int main()
{
    //создать объект класса GradeBook
    GradeBook myGradeBook("CS101 C++ Programming");

    //вывести приветствие
    myGradeBook.displayMessage();

    //прочитать вводимые оценки
    myGradeBook.inputGrades();

    //вывести отчет по оценкам
    myGradeBook.displayGradeReport();


    return 0;
}

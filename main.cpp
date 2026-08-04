//Пример 14
//Версия класса GradeBook использует массив целых для сохранения оценок,
//полученными несколькими студентами за одну контрольную работу.
#include "GradeBook.h"

//функция main начинает исполнение программы
int main()
{
    //массив оценок студента
    int gradesArray[GradeBook::students] =
        {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

    //создать объект класса GradeBook
    GradeBook myGradeBook("CS101 C++ Programming", gradesArray);

    //вывести приветствие
    myGradeBook.displayMessage();

    myGradeBook.processGrades();


    return 0;
}

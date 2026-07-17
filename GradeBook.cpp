//Пример 13
//Произведена модификация класса, включая в него определяемую пользователем
//функцию maximum, которая находит и возвращает наибольшее из трех целых значений.
#include <iostream>

#include "GradeBook.h"


    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook::GradeBook(std::string nameOfCourse)
    {
        setCourseName(nameOfCourse);
        maximumGrade = 0;
    }

    //метод, устанавливающий название курса гарантирует, что название курса содержит не более 25 символов
    void GradeBook::setCourseName(std::string nameOfCourse)
    {
        if(nameOfCourse.length() <= 25)  //если не более 25 символов
            courseName = nameOfCourse;  //сохранить название курса в объекте

        else  //если в названии более 25 символов
        {
            //записать в courseName первые 25 символов параметра name
            courseName = nameOfCourse.substr(0, 25);    //начать с 0, длина 25

            std::cout << "Name \"" << nameOfCourse << "\" exceeds maximum length.\n"
                << "Limiting courseName to first 25 characters.\n" << std::endl;
        }

    }


    //метод, получающий название курса
    std::string GradeBook::getCourseName()
    {
        return courseName;  //возвратить название курса из объекта
    }


    //метод, выводящий приветствие пользователю GradeBook
    void GradeBook::displayMessage()
    {
        std::cout << "Welcome to the GradeBook for\n" << getCourseName()
            << "!\n" << std::endl;
    }

     //получить от пользователя три оценки; определить максимум
     void GradeBook::inputGrades()
     {
        int grade1;  //первая оценка, введенная пользователем
        int grade2;  //вторая оценка, введенная пользователем
        int grade3;  //третья оценка, введенная пользователем

        std::cout << "Enter three integer grades: ";
        std::cin >> grade1 >> grade2 >> grade3;

        maximumGrade = maximum(grade1, grade2, grade3);
     }

     int GradeBook::maximum(int x, int y, int z)
     {
        int maximumValue = x;

        if(y > maximumValue)
            maximumValue = y;

        if(z > maximumValue)
            maximumValue = z;

        return maximumValue;
     }

     //вывести отчет по оценкам, введенным пользователем
     void GradeBook::displayGradeReport()
     {
        //вывести максимум введенных оценок
        std::cout << "\n\Maximum of grades entered: " << maximumGrade << std::endl;
     }

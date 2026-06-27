//Пример 7
//Реализация методов класса GradeBook.
//Метод setCourseName производит подтверждение данных

#include <iostream>

#include "GradeBook.h"


    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook::GradeBook(std::string name)
    {
        setCourseName(name);
    }

    //метод, устанавливающий название курса гарантирует, что название курса содержит не более 25 символов
    void GradeBook::setCourseName(std::string name)
    {
        if(name.length() <= 25)  //если не более 25 символов
            courseName = name;  //сохранить название курса в объекте

        if(name.length() > 25)  //если в названии более 25 символов
        {
            //записать в courseName первые 25 символов параметра name
            courseName = name.substr(0, 25);    //начать с 0, длина 25

            std::cout << "Name \"" << name << "\" exceeds maximum length.\n"
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
        std::cout << "Welcome to the GradeBook for\n" << getCourseName() << "!" << std::endl;
    }


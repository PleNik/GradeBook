//Пример 6
//Определения методов класса GradeBook. Файл содержит реализацию функций,
//прототипы которых объявлены в GradeBook.h

#include <iostream>

#include "GradeBook.h"


    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook::GradeBook(std::string name)
    {
        setCourseName(name);
    }

    //метод, устанавливающий название курса
    void GradeBook::setCourseName(std::string name)
    {
        courseName = name;  //сохранить название курса в объекте
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


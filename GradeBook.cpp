//Пример 7
//Реализация методов класса GradeBook.
//Метод setCourseName производит подтверждение данных

#include <iostream>

#include "GradeBook.h"


    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook::GradeBook(std::string nameOfCourse, std::string nameOfTeacher)
    {
        setCourseName(nameOfCourse);
        setTeaherName(nameOfTeacher);
    }

    //метод, устанавливающий название курса гарантирует, что название курса содержит не более 25 символов
    void GradeBook::setCourseName(std::string nameOfCourse)
    {
        if(nameOfCourse.length() <= 25)  //если не более 25 символов
            courseName = nameOfCourse;  //сохранить название курса в объекте

        if(nameOfCourse.length() > 25)  //если в названии более 25 символов
        {
            //записать в courseName первые 25 символов параметра name
            courseName = nameOfCourse.substr(0, 25);    //начать с 0, длина 25

            std::cout << "Name \"" << nameOfCourse << "\" exceeds maximum length.\n"
                << "Limiting courseName to first 25 characters.\n" << std::endl;
        }

    }

    //метод, устанавливающий имя преподавателя
    void GradeBook::setTeaherName(std::string nameOfTeacher)
    {
        teacherName = nameOfTeacher;
    }

    //метод, получающий название курса
    std::string GradeBook::getCourseName()
    {
        return courseName;  //возвратить название курса из объекта
    }

     //метод, получающий имя преподавателя
    std::string GradeBook::getTeacherName()
    {
        return teacherName;
    }


    //метод, выводящий приветствие пользователю GradeBook
    void GradeBook::displayMessage()
    {
        std::cout << "Welcome to the GradeBook for\n" << getCourseName() << "!"
            << "\nThis course is presented by: " << getTeacherName() << std::endl;
    }


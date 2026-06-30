//Пример 10
//Метод *DetermineClassAverage* модифицирован.
//При каждом запуске он обрабатывает оценки для произвольного числа студентов.

#include <iostream>
using std::fixed;

#include <iomanip>
using std::setprecision;

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

        else  //если в названии более 25 символов
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

    //метод усредняет введенные оценки
    void GradeBook::determineClassAverage()
    {
        int total = 0;  //сумма оценок, введенных пользователем
        int gradeCounter = 0;   //счетчик оценок
        int grade = 0;  //значение введенной пользователем оценки
        double average;    //средняя оценка

        std::cout << "Enter grade or -1 to quit: ";
        std::cin >> grade;

        while(grade != -1)
        {
            total += grade;
            gradeCounter ++;

            std::cout << "Enter grade or -1 to quit: ";
            std::cin >> grade;
        }

        if(gradeCounter != 0)
        {
            average = static_cast<double>(total)/gradeCounter;

            std::cout << "\nTotal of all " << gradeCounter
                << " grades entered is " << total << std::endl;
            std::cout << "Class average is " << setprecision(2) << fixed
                << average << std::endl;
        }
        else
            std::cout << "No grades were entered" << std::endl;


     }

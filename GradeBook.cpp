//Пример 14
//Версия класса GradeBook использует массив целых для сохранения оценок,
//полученными несколькими студентами за одну контрольную работу.

#include <iostream>
#include <iomanip>

#include "GradeBook.h"


    //конструктор инициализирует название курса и массив оценок
    GradeBook::GradeBook(std::string nameOfCourse, const int gradesArray[])
    {
        setCourseName(nameOfCourse);

        //копировать оценки из gradesArray в элемент данных grades
        for(int grade = 0; grade < students; grade++)
            grades[grade] = gradesArray[grade];
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

     //произвести над данными различные операции
     void GradeBook::processGrades()
     {
       //вывести масси в оценок
       outputGrades();

       //вызвать функцию getAverage для вычисления средней оценки
       std::cout << "\nClass average is " << std::setprecision(2) << std::fixed <<
            getAverage() << std::endl;

        //вызвать функции getMinimum и getMaximum
        std::cout << "Lowest grade is " << getMinimum()
            << "\nHighest grade is " << getMaximum() << std::endl;

        //вызвать outputBarChart для печати диаграммы распределения
        outputBarChart();
     }

    //найти минимальную оценку
     int GradeBook::getMinimum()
     {
        int lowGrade = 100; //принять низшую оценку равной 100

        //цикл по массиву grades
        for(int grade = 0; grade < students; grade++)
        {
            //если текущая оценка меньше lowGrade, присвоить ее lowGrade
            if(grades[grade] < lowGrade)
                lowGrade = grades[grade];   //новая низшая оценка
        }

        return lowGrade;
     }

     //найти максимальную оценку
     int GradeBook::getMaximum()
     {
        int highGrade = 0;  //принять высшую оценку равной 0

        //цикл по массиву grades
        for(int grade = 0; grade < students; grade++)
        {
            //если текущая оценка меньше lowGrade, присвоить ее lowGrade
            if(grades[grade] > highGrade)
                highGrade = grades[grade];   //новая низшая оценка
        }

        return highGrade;

     }

     //определить среднюю оценку за экзамен
     double GradeBook::getAverage()
     {
        int total = 0;  //инициализировать сумму

        //суммировать оценки в массиве
        for(int grade = 0; grade < students; grade++)
            total += grades[grade];

        //возвратить среднее для оценок
        return static_cast<double>(total) / students;
     }

     //вывест столбцовую диаграмму, показывающую распределение оценок
     void GradeBook::outputBarChart()
     {
        std::cout << "\nGrade distribution:" << std::endl;

        //хранит частоты для каждого из диапазонов по 10 оценок
        const int frequencySize = 11;
        int frequency [frequencySize] = {0};

        //для каждой оценки увеличить соответствующую частоту
        for(int grade = 0; grade < students; grade++)
            frequency[grades[grade] / 10]++;

        //для каждой частоты вывести столбец диаграммы
        for(int count = 0; count < frequencySize; count++)
        {
            //вывести метки столбцов ("0-9:", ..., "90-99:", "100:")
            if(count == 0)
                std::cout << "  0-9: ";
            else if(count == 10)
                std::cout << "  100: ";
            else
                std::cout << count * 10 << "-" << (count * 10) + 9 << ": ";

            //напечатать столбец звездочек
            for(int stars = 0; stars < frequency[count]; stars++)
                std::cout << '*';
            std::cout << std::endl; //начать новую строку вывода
        }
     }

     //вывести содержимое массива оценок
     void GradeBook::outputGrades()
     {
        std::cout << "\nThe grades are:\n\n";

        //вывести оценку каждого студента
        for(int student = 0; student < students; student++)
            std::cout << "Student " << std::setw(2) << student + 1 << ": "
                << std::setw(3) << grades[student] << std::endl;
     }

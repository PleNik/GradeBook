//Пример 15
//Версия класса GradeBook с двумерным массивом, который испольуется для хранения оценок,
//полученных студентами за несколько контрольных.
//Каждая строка массива хранит оценки студентов за весь курс,
//каждый столбец хранит все оценки  за какую-то одну контрольную.

#include <iostream>
#include <iomanip>

#include "GradeBook.h"


    //конструктор инициализирует название курса и массив оценок
    GradeBook::GradeBook(std::string nameOfCourse, const int gradesArray[][tests])
    {
        setCourseName(nameOfCourse);    //инициализировать courseName

        //копировать оценки из gradesArray в элемент данных grades
        for(int student = 0; student < students; student++)
            for(int test = 0; test < tests; test++)
                grades[student][test] = gradesArray[student][test];
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
       //вывести массив в оценок
       outputGrades();

        //вызвать функции getMinimum и getMaximum
        std::cout << "\nLowest grade in the grade book is " << getMinimum()
            << "\nHighest grade int the grade book is " << getMaximum() << std::endl;

        //вызвать диаграмму распределения оценок по всем экзаменам
        outputBarChart();
     }

    //найти минимальную оценку
     int GradeBook::getMinimum()
     {
        int lowGrade = 100; //принять низшую оценку равной 100

        //цикл по строкам массива grades
        for(int student = 0; student < students; student++)
        {
            //цикл по столбцам текущей строки
            for(int test = 0; test < tests; test++)
            {
                //если текущая оценка меньше lowGrade, присвоить ее lowGrade
                if(grades[student][test] < lowGrade)
                    lowGrade = grades[student][test];  //новая низшая оценка
            }
        }

        return lowGrade;
     }

     //найти максимальную оценку
     int GradeBook::getMaximum()
     {
        int highGrade = 0;  //принять высшую оценку равной 0

        //цикл по строкам массива grades
        for(int student = 0; student < students; student++)
        {
            //цикл по столбцам текущей строки
            for(int test = 0; test < tests; test++)
            {
                //если текущая оценка больше highGrade, присвоить ее highGrade
                if(grades[student][test] > highGrade)
                    highGrade = grades[student][test];  //новая низшая оценка
            }
        }

        return highGrade;

     }

     //определить среднее для конкретного набора оценок
     double GradeBook::getAverage(const int setGrades[], const int grades)
     {
        int total = 0;  //инициализировать сумму

        //суммировать оценки в массиве
        for(int grade = 0; grade < grades; grade++)
            total += setGrades[grade];

        //возвратить среднее для оценок
        return static_cast<double>(total) / grades;
     }

     //вывести столбцовую диаграмму, показывающую распределение оценок
     void GradeBook::outputBarChart()
     {
        std::cout << "\nOveral grade distribution:" << std::endl;

        //хранит частоты для каждого из диапазонов по 10 оценок
        const int frequencySize = 11;
        int frequency [frequencySize] = {0};

        //для каждой оценки увеличить соответствующую частоту
        for(int student = 0; student < students; student++)
            for(int test = 0; test < tests; test++)
                ++frequency[grades[student][test] / 10];

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
        std::cout << "            ";    //выровнять заголовки колонок

        //создать заголовки колонок для каждой из контрольных
        for(int test = 0; test < tests; test++)
            std::cout << "Test " << test + 1 << "  ";

        std::cout << "Average" << std::endl;    //заголовок для средних оценок

        //создать строки/столбцы текста, представляющие массив grade
        for(int student = 0; student < students; student++)
        {
            std::cout << "Student " << std::setw(2) << student + 1;

            //вывести оценки студента
            for(int test = 0; test < tests; test++)
                std::cout << std::setw(8) << grades[student][test];

            //вызвать getAverage для получения средней оценки студента;
            //передать в аргументах строку оценок и число контрольных
            double average = getAverage(grades[student], tests);
            std::cout << std::setw(9) << std::setprecision(2) << std::fixed << average
                << std::endl;
        }

     }

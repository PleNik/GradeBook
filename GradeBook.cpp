//Пример 12
//В метод void inputGrades() добавлен расчет средней оценки класса. Вес оценки 'A' - 4 пункта, оценки 'B' - 3 пункта и т.д.

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
        aCount = 0; //инициализировать нулем счетчик оценок А
        bCount = 0; //инициализировать нулем счетчик оценок B
        cCount = 0; //инициализировать нулем счетчик оценок C
        dCount = 0; //инициализировать нулем счетчик оценок D
        fCount = 0; //инициализировать нулем счетчик оценок F
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

     //ввести произвольное число оценок, обновить счетчик оценок
     void GradeBook::inputGrades()
     {
        int grade;  //оценка, введенная пользователем

        std::cout << "Enter the letter grades." << std::endl
            << "Enter the EOF character to end input." << std::endl;

        //цикл, пока пользователь не введет комбинацию для конца файла
        while( (grade = std::cin.get()) != EOF)
        {
            //определить, какакя введена оценка
            switch(grade)
            {
                case 'A':   //оценка А в верхнем регистре
                case 'a':   //или а в нижнем регистреа
                    aCount++;
                    break;

                case 'B':   //оценка B в верхнем регистре
                case 'b':   //или b в нижнем регистреа
                    bCount++;
                    break;

                case 'C':   //оценка C в верхнем регистре
                case 'c':   //или c в нижнем регистреа
                    cCount++;
                    break;

                case 'D':   //оценка D в верхнем регистре
                case 'd':   //или d в нижнем регистреа
                    dCount++;
                    break;

                case 'F':   //оценка F в верхнем регистре
                case 'f':   //или f в нижнем регистреа
                    fCount++;
                    break;

                case '\n':  //игнорировать вводимые символы новой строки,
                case '\t':  //табуляции,
                case ' ':   //и пробела
                    break;

                default:    //перехватывает все остальные символы
                    std::cout << "Incorrect letter grade entered."
                        << "Enter a new grade." << std::endl;
            }
        }
     }

     //вывести отчет по оценкам, введенным пользователем
     void GradeBook::displayGradeReport()
     {
        //вывести сводку результатов
        std::cout << "\n\nNumber of students who received each letter grade:"
            << "\nA: " << aCount    //вывести число оценок А
            << "\nB: " << bCount    //вывести число оценок B
            << "\nC: " << cCount    //вывести число оценок C
            << "\nD: " << dCount    //вывести число оценок D
            << "\nF: " << fCount;    //вывести число оценок F

            int count = aCount + bCount + cCount + dCount + fCount;

        std::cout << "\n\nAverage rating for class: " << (aCount*4 + bCount*3 + cCount*2 + dCount)/count;
        std::cout << std::endl;
     }

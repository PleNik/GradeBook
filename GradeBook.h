//Пример 5
//Определение класса GradeBook в файле, отдельном от main

#include <iostream>
#include <string>

//определение класса GradeBook
class GradeBook
{
public:
    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook(std::string name)
    {
        setCourseName(name);
    }

    //метод, устанавливающий название курса
    void setCourseName(std::string name)
    {
        courseName = name;  //сохранить название курса в объекте
    }

    //метод, получающий название курса
    std::string getCourseName()
    {
        return courseName;  //возвратить название курса из объекта
    }

    //метод, выводящий приветствие пользователю GradeBook
    void displayMessage()
    {
        std::cout << "Welcome to the GradeBook for\n" << getCourseName() << "!" << std::endl;
    }

    private:
        std::string courseName; //название курса для данного объекта класса GradeBook

};  //конец класса GradeBook

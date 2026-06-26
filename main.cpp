//Пример 4
//Создание нескольких объектов класса GradeBook и использование
//конструктора GradeBook для инициализации названия курса при создании
// каждого из объектов

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

//функция main начинает исполнение программы
int main()
{
    //создать 2 объекта класса GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    //вывести исходное значение courseName для каждого объекта
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();


    return 0;
}

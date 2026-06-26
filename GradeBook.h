//Пример 6
//Определение класса GradeBook. Файл представляет собой открытый интерфейс
//GradeBook, не раскрывая реализации методов, определенных в файле GradeBook.cpp

#include <string>

//определение класса GradeBook
class GradeBook
{
public:
    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook(std::string name);

    //метод, устанавливающий название курса
    void setCourseName(std::string name);


    //метод, получающий название курса
    std::string getCourseName();

    //метод, выводящий приветствие пользователю GradeBook
    void displayMessage();


    private:
        std::string courseName; //название курса для данного объекта класса GradeBook

};  //конец класса GradeBook

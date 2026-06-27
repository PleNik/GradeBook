//Пример 6
//Определение класса GradeBook. Файл представляет собой открытый интерфейс
//GradeBook, не раскрывая реализации методов, определенных в файле GradeBook.cpp

#include <string>

//определение класса GradeBook
class GradeBook
{
public:
    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook(std::string nameOfCourse, std::string nameOfTeacher);

    //метод, устанавливающий название курса
    void setCourseName(std::string nameOfCourse);

    //метод, устанавливающий имя преподавателя
    void setTeaherName(std::string nameOfTeacher);


    //метод, получающий название курса
    std::string getCourseName();

    //метод, получающий имя преподавателя
    std::string getTeacherName();

    //метод, выводящий приветствие пользователю GradeBook
    void displayMessage();


    private:
        std::string courseName; //название курса для данного объекта класса GradeBook
        std::string teacherName; //имя преподавателя, ведущего курс

};  //конец класса GradeBook

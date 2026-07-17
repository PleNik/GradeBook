//Пример 13
//Произведена модификация класса, включая в него определяемую пользователем
//функцию maximum, которая находит и возвращает наибольшее из трех целых значений.

#include <string>

//определение класса GradeBook
class GradeBook
{
public:
    //конструктор инициализирует название курса courseName переданной строкой
    GradeBook(std::string nameOfCourse);

    //метод, устанавливающий название курса
    void setCourseName(std::string nameOfCourse);

    //метод, получающий название курса
    std::string getCourseName();

    //метод, выводящий приветствие пользователю GradeBook
    void displayMessage();

    //ввести произвольное число оценок
    void inputGrades();

    //вывести отчет по введенным оценкам
    void displayGradeReport();

    //определить максимум из трех целых
    int maximum(int, int, int);

    private:
        std::string courseName; //название курса для данного объекта класса GradeBook
        int maximumGrade; //максимум из 3 значений

};  //конец класса GradeBook

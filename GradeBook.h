//Пример 14
//Версия класса GradeBook использует массив целых для сохранения оценок,
//полученными несколькими студентами за одну контрольную работу.

#include <string>

//определение класса GradeBook
class GradeBook
{
public:
    //константа = число студентов, сдавших экзамен
    const static int students = 10;

    //конструктор инициализирует название курса и массив оценок
    GradeBook(std::string nameOfCourse, const int[]);

    //метод, устанавливающий название курса
    void setCourseName(std::string nameOfCourse);

    //метод, получающий название курса
    std::string getCourseName();

    //метод, выводящий приветствие пользователю GradeBook
    void displayMessage();

    //различные действия над оценками
    void processGrades();

    //найти минимальную оценку за контрольную
    int getMinimum();

    //найти максимальную оценку за контрольную
    int getMaximum();

    //определить среднюю оценку за контрольную
    double getAverage();

    //выввести диаграмму распределения оценок
    void outputBarChart();

    //вывести содержимое массива оценок
    void outputGrades();

    private:
        std::string courseName; //название курса для данного объекта класса GradeBook
        int grades[students]; //массив оценок студента

};  //конец класса GradeBook

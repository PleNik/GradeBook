//Пример 15
//Версия класса GradeBook с двумерным массивом, который испольуется для хранения оценок,
//полученных студентами за несколько контрольных.
//Каждая строка массива хранит оценки студентов за весь курс,
//каждый столбец хранит все оценки  за какую-то одну контрольную.

#include <string>

//определение класса GradeBook
class GradeBook
{
public:

    const static int students = 10; //число студентов
    const static int tests = 3; //число контрольных

    //конструктор инициализирует название курса и массив оценок
    GradeBook(std::string nameOfCourse, const int[] [tests]);

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
    double getAverage(const int[], const int);

    //выввести диаграмму распределения оценок
    void outputBarChart();

    //вывести содержимое массива оценок
    void outputGrades();

    private:
        std::string courseName; //название курса для данного объекта класса GradeBook
        int grades[students][tests]; //двумерный массив оценок

};  //конец класса GradeBook

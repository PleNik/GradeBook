//Пример 12
//В метод void inputGrades() добавлен расчет средней оценки класса. Вес оценки 'A' - 4 пункта, оценки 'B' - 3 пункта и т.д.

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

    //метод усредняет введенные оценки
    void determineClassAverage();

    //ввести произвольное число оценок
    void inputGrades();

    //вывести отчет по введенным оценкам
    void displayGradeReport();

    private:
        std::string courseName; //название курса для данного объекта класса GradeBook
        std::string teacherName; //имя преподавателя, ведущего курс
        int aCount; //число оценок А
        int bCount; //число оценок В
        int cCount; //число оценок С
        int dCount; //число оценок D
        int fCount; //чисо оценок F

};  //конец класса GradeBook

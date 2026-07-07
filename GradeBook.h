//Пример 11
//Новая версия класса просит пользователя ввести ряд буквенных оценок (метод void inputGrades())
//и затем выводит сводку числа студентов, получивших каждую из возможных оценок
//(метод *void displayGradeReport()*). Введены дополнительные поля класса:
//int aCount, int bCount, int cCount, int dCount, int fCount - числа оценок в каждой категории A, B, C, D, F.

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

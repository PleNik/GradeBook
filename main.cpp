//Пример 3
//Определить класс GradeBook, содержащий атрибут courseName
//и методы для установки и извлечения его значений;
//создать и протестировать объект класса GradeBook.

#include <iostream>
#include <string>

//определение класса GradeBook
class GradeBook
{
public:
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
    std::string nameOfCourse;   //строка для хранения названия курса
    GradeBook myGradeBook;  //создать объект класса GradeBook с именем myGradeBook

    //вывести исходное значение courseName
    std::cout << "Initial course name is: " << myGradeBook.getCourseName() << std::endl;

    //запросить ввод названия курса
    std::cout << "\nPlease enter the course name: " << std::endl;
    std::getline(std::cin, nameOfCourse);   //прочитать название с пробелами
    myGradeBook.setCourseName(nameOfCourse);    //установить название

    std::cout << std::endl;
    myGradeBook.displayMessage();   //вывести новое название курса

    return 0;
}

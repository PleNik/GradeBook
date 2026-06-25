//Пример 2
//Определить класс GradeBook с методом, принимающим параметр;
//создать объект класса GradeBook и вызвать его метод displayMessage.

#include <iostream>
#include <string>

//определение класса GradeBook
class GradeBook
{
public:
    //метод, выводящий приветствие пользователю GradeBook
    void displayMessage(std::string courseName)
    {
        std::cout << "Welcome to the GradeBook for\n" << courseName << "!" << std::endl;
    }   //конец метода displayMessage

};  //конец класса GradeBook

//функция main начинает исполнение программы
int main()
{
    std::string nameOfCourse;   //строка для хранения названия курса
    GradeBook myGradeBook;  //создать объект класса GradeBook с именем myGradeBook

    //запросить ввод названия курса
    std::cout << "Please enter the course name: " << std::endl;
    std::getline(std::cin, nameOfCourse);   //прочитать название с пробелами
    std::cout << std::endl;

    //вызвать метод displayMessage() объекта myGradeBook и передать ей nameOfCourse
    //в качестве аргумента
    myGradeBook.displayMessage(nameOfCourse);

    return 0;
}

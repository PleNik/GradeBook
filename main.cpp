//Пример 1
//Определить класс GradeBook с методом displayMessage;
//создать объект класса GradeBook и вызвать его метод displayMessage.

#include <iostream>

//определение класса GradeBook
class GradeBook
{
public:
    //метод, выводящий приветствие пользователю GradeBook
    void displayMessage()
    {
        std::cout << "Welcome to the GradeBook!" << std::endl;
    }   //конец метода displayMessage

};  //конец класса GradeBook

//функция main начинает исполнение программы
int main()
{
    GradeBook myGradeBook;  //создать объект класса GradeBook с именем myGradeBook
    myGradeBook.displayMessage();   //вызвать метод displayMessage() объекта myGradeBook

    return 0;
}

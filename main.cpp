#include <iostream>
#include "Student.h"
#include "ClockType.h"
void display_student_by_value(const Student student)
{

    cout << "Displayed By reference" <<endl;
    cout << "ID: " << student.getId()<<endl;
    cout << "Name: " << student.getName()<<endl;
    cout << "Age: " << student.getAge()<<endl;
    cout << "Height: " << student.getHeight()<<endl;

}
void display_student_by_reference(const Student &student)
{
    cout << "Displayed By value" <<endl;
    cout << "ID: " << student.getId()<<endl;
    cout << "Name: " << student.getName()<<endl;
    cout << "Age: " << student.getAge()<<endl;
    cout << "Height: " << student.getHeight()<<endl;

}
void display_student_by_pointer(const Student *student)
{
    cout << "Displayed By Pointer" <<endl;
    cout << "ID: " << student->getId()<<endl;
    cout << "Name: " << student->getName()<<endl;
    cout << "Age: " << student->getAge()<<endl;
    cout << "Height: " << student->getHeight()<<endl;

}

void clockMain();

int main() {
    /*Student std;
    display_student_by_reference(std);
    Student std2(2, "Jane Doe", 18, 1.45);
    display_student_by_pointer(&std2);
    display_student_by_value(std2);
    */
    clockMain();
    return 0;
}
void clockMain()
{
    ClockType ct;
    cout << ct.getCurrentTime()<<endl;
    ClockType ct2(23,55,59);
    ct2.incrementSecondsBy(300);
    cout << ct2.getCurrentTime()<<endl;
}
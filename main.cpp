#include <iostream>
#include "Student.h"

void display_student_by_reference(Student &student)
{

    cout << "ID: " << student.getId()<<endl;
    cout << "Name: " << student.getName()<<endl;
    cout << "Age: " << student.getAge()<<endl;
    cout << "Height: " << student.getHeight()<<endl;

}
int main() {
    Student std;
    display_student_by_reference(std);
    Student std2(2, "Jane Doe", 18, 1.45);
    display_student_by_reference(std2);
    return 0;
}

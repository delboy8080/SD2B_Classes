//
// Created by floodd on 22/03/2022.
//

#ifndef SD2B_CLASSES_STUDENT_H
#define SD2B_CLASSES_STUDENT_H
#include <string>
using namespace std;

class Student
{
    int id;
    string name;
    int age;
    double height;
public:
    Student();
    Student(int id, string name, int age, double height);

    int getId() const;
    string getName() const;
    int getAge() const;
    double getHeight() const;

    void setId(int id);
    void setName(string name);
    void setAge(int age);
    void setHeight(double height);
};
#endif //SD2B_CLASSES_STUDENT_H

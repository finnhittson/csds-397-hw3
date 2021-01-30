#ifndef STUDENT_H_INCLUDE
#define STUDENT_H_INCLUDE
#include "person.h"     // parent header file

class Student : virtual public Person // definition of class Student with parent class Person
{
public:
    Student(int = 0, std::string = "n/a", int = -1, std::string = "n/a", double = -1.0); // default constructor Student(id, name, grad yead, major, gpa)

    void set_gradYear(int);     // getter and setter for grad_year variable
    int get_gradYear() const;

    void set_major(std::string);        // getter and setter for major variable
    std::string get_major() const;

    void setGPA(double);       // getter and setter for gpa variable
    double getGPA() const;

    std::string print() const;      // print function returning properties of object

private:
    int grad_year;      // variables for grad_year, major and gpa
    std::string major;
    double gpa;
};
#endif // STUDENT_H_INCLUDE

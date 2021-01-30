#include <iostream>
#include "student.h"

Student::Student(int id, std::string name, int grad_year, std::string major, double gpa)    // constructor initializing class variables with default or
   : Person(id, name)                                                                      // input values and calling parent constructor
{
    set_name(name);
    set_id(id);
    set_gradYear(grad_year);        // sets grad_year variable
    set_major(major);               // sets major variable
    setGPA(gpa);                   // sets gpa variable
}

void Student::set_gradYear(int new_gradYear)        // setter for grad_year variable
{
    grad_year = new_gradYear;       // assigns new value for grad_year
}

int Student::get_gradYear() const       // getter for grad_year
{
    return grad_year;       // returns grad_year variable
}

void Student::set_major(std::string new_major)      // setter for major variable
{
    major = new_major;      // assigns new value for major
}

std::string Student::get_major() const      // getter for major variable
{
    return major;       // returns major variable
}

void Student::setGPA(double new_gpa)       // setter for gpa variable
{
    gpa = new_gpa;      // assigns new value for major
}

double Student::getGPA() const     // getter gpa variable
{
    return gpa;     // returns gpa variable
}

std::string Student::print() const      // print function returning object's variable's values parsed into one string
{
    return Person::print() + "\ngraduation year: " + std::to_string(get_gradYear()) + "\nmajor: " + get_major() + "\ngpa: " + std::to_string(getGPA());
}

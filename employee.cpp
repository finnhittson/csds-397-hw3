#include <iostream>
#include "employee.h"

Employee::Employee(double salary, std::string name, int id, std::string department)     // constructor initializing class variables with default or inputed
    : Person(id, name)                                                                  // values and calling parent constructor
{
    set_name(name);
    set_id(id);
    set_salary(salary);         // sets salary variable
    set_department(department);     // sets department variable
}

void Employee::set_salary(double new_salary)        // setter or salary variable
{
    salary = new_salary;        // assigns new value for salary
}

double Employee::get_salary() const     // getter for salary variable
{
    return salary;      // returns salary variable
}

void Employee::set_department(std::string new_department)       // setter for department variable
{
    department = new_department;        // assigns new value for department
}

std::string Employee::get_department() const        // getter for department variable
{
    return department;      // returns department variable
}

std::string Employee::print() const     // print function returning object's variables values parsed into one string
{
    return Person::print() + "\nsalary: " + std::to_string(get_salary()) + "\ndepartment: " + get_department();
}

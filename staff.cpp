#include <iostream>
#include "staff.h"
// constructor initializing class variables with input or default values and calling parent constructor
Staff::Staff(int id, std::string name, double salary, std::string department, std::string title)
    : Employee(salary, name, id, department)
{
    set_name(name);
    set_id(id);
    set_salary(salary);
    set_department(department);
    set_title(title);       // set title variable
}

void Staff::set_title(std::string new_title)        // setter for title variable
{
    title = new_title;      // assigns new value to title variable
}

std::string Staff::get_title() const        // getter for title variable
{
    return title;       // returns title variable
}

std::string Staff::print() const        // print function returning object's variable's values parsed into one string
{
    return Employee::print() + "\ntitle: " + get_title();       // returns parsed string
}

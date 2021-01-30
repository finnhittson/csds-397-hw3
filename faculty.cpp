#include <iostream>
#include "faculty.h"
// constructor initializing class variables with default or input values and calling parent constructor
Faculty::Faculty(int id, std::string name, double salary, std::string department, std::string title, std::string research)
    :Employee(salary, name, id, department)
{
    set_title(title);       // set title variable
    set_research(research);     // set research variable
}

void Faculty::set_title(std::string new_title)      // setter for title variable
{
    title = new_title;      // assigns new value to title variable
}

std::string Faculty::get_title() const      // getter for title variable
{
    return title;       // returns title variable
}

void Faculty::set_research(std::string new_research)        //setter for research variable
{
    research = new_research;        // assigns new value to research variable
}

std::string Faculty::get_research() const       // getter for research variable
{
    return research;        // returns research variable
}

std::string Faculty::print() const      // print function returning object's variable's values parsed into one string
{
    return Employee::print() + "\ntitle: " + get_title() + "\nresearch focus: " + get_research();       // returns parsed string
}

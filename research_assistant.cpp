#include <iostream>
#include "research_assistant.h"
// constructor initializing class variables to with default or input values and calling parent constructor
ResearchAssistant::ResearchAssistant(std::string area, std::string title, std::string department, double salary, int id, std::string name)
    :Staff(id, name, salary, department, title)
{
    set_name(name);
    set_id(id);
    set_research(area);
    //set_ternary(true);
}
// constructor initializing class variables to with default or input values and calling parent constructor
ResearchAssistant::ResearchAssistant(std::string area, std::string major, double gpa, int grad_year, int id, std::string name)
    :Student(id, name, grad_year, major, gpa)
{
    set_research(area);
    //set_ternary(false);
}

void ResearchAssistant::set_research(std::string new_area)      // setter for research variable
{
    research = new_area;        // assigns new value to research variable
}

std::string ResearchAssistant::get_research() const     // getter for research variable
{
    return research;        // returns research variable
}

bool ResearchAssistant::default_student() const     // returns true if student's values are default and false if otherwise
{
    if (getGPA() == -1 && get_major() == "n/a" && get_gradYear() == -1)     // checks if student values are of default value
        return true;        // returns true
    else
        return false;       // returns false otherwise
}

bool ResearchAssistant::default_staff() const       // returns true if staffs's values are default and false if otherwise
{
    if (get_salary() == 0.00 && get_department() == "n/a" && get_title() == "n/a")      // checks if staff values are of default value
        return true;        // returns true
    else
        return false;       // returns false otherwise
}

std::string ResearchAssistant::print() const        // print function returning object's variable's values into one parsed string
{
    if (default_student())      // checks if the student specific values of object are set to default
        return Staff::print() + "\nresearch: " + get_research();        // if true then object is Staff. returns Staff variable's values parsed into one string
    else if (default_staff())       // checks if staff specific values of object are set to default
        return Student::print() + "\nresearch: " + get_research();      // if true then object is Student. returns Student variables's values parsed into one string
    else        // otherwise prints error
        return "ERROR: Object has either defaults or no defaults in Student and Staff fields.";
}

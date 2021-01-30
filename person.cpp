#include <iostream>
#include "person.h"         // person header file

Person::Person(int id, std::string name)    // constructor initializing class variables with default or input values
{
    set_id(id);         // set id
    set_name(name);     // set name
}

void Person::set_id(int new_id)     // setter for id
{
    id = new_id;    // assigns new value for id
}

int Person::get_id() const      // getter for id
{
    return id;      //returns variable value
}

void Person::set_name(std::string new_name)     // setter for name
{
        name = new_name;        // assigns new value for name
}

std::string Person::get_name() const        //getter for name
{
    return name;        // returns name
}

std::string Person::print() const       // print function returning object's variables values parsed into one string
{
    return "name: " + get_name() + "\nid #: " + std::to_string(get_id());       // returns parsed string
}

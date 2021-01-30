#ifndef FACULTY_H_INCLUDE
#define FACULTY_H_INCLUDE
#include "employee.h"

class Faculty : public Employee     // definition of class Faculty with parent class Employee
{
public:
    // default constructor Faculty(id, name, salary, department, title, research)
    Faculty(int = 0, std::string = "n/a", double = 0.00, std::string = "n/a", std::string = "n/a", std::string = "n/a");

    void set_title(std::string);        // getter and setter for title variable
    std::string get_title() const;

    void set_research(std::string);     // getter and setter for research variable
    std::string get_research() const;

    std::string print() const;      // print function returning properties of object

private:
    std::string title;      // variables for title and research
    std::string research;
};
#endif // FACULTY_H_INCLUDE

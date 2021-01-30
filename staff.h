#ifndef STAFF_H_INCLUDE
#define STAFF_H_INCLUDE
#include "employee.h"
#include <string>

class Staff : public Employee       // definition of class Staff with parent class Employee
{
public:
    // default constructor Staff(id, name, salary, department, title)
    Staff(int = 0, std::string = "n/a", double = 0.00, std::string = "n/a", std::string = "n/a");

    void set_title(std::string);        // getter and setter for title variable
    std::string get_title() const;

    std::string print() const;      // print function returning properties of object

private:
    std::string title;      // variable for title
};
#endif // STAFF_H_INCLUDe

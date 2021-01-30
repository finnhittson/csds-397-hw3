#ifndef EMPLOYEE_H_INCLUDE
#define EMPLOYEE_H_INCLUDE
#include "person.h"     // parent header file

class Employee : virtual public Person      // definition of class Employee with parent class Person
{
public:
    Employee(double = 0.00, std::string = "n/a", int = 0, std::string = "n/a");         // default constructor Employee(salary, name, id, department)

    void set_salary(double);        // getter and setter for salary variable
    double get_salary() const;

    void set_department(std::string);       // getter and setter for department variable
    std::string get_department() const;

    std::string print() const;      // print function returning properties of object

private:
    double salary;              // variables for salary and department
    std::string department;
};
#endif // EMPLOYEE_H_INCLUDE

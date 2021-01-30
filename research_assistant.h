#ifndef RESEARCHASSISTANT_H_INCLUDE
#define RESEARCHASSISTANT_H_INCLUDE
#include "student.h"
#include "staff.h"

class ResearchAssistant : public Staff, public Student      // definition of class ResearchAssistant with parent class of Student and Staff
{
public:
    // default constructor ResearchAssistant(area, title, department, salary, id, name)
    ResearchAssistant(std::string = "n/a", std::string = "n/a", std::string = "n/a", double = 0.00, int = 0, std::string = "n/a");
    // default constructor ResearchAssistant(area, major, gpa, gradyear, id, name)
    ResearchAssistant(std::string = "n/a", std::string = "n/a", double = 0.0, int = 0, int = 0, std::string = "n/a");

    void set_research(std::string);     // getter and setter for research variable
    std::string get_research() const;

    std::string print() const;      // print function returning properties of object

    bool default_student() const;       // checks for student default values
    bool default_staff() const;         // checks for staff default values

private:
    std::string research;       // variable for research
    bool ternary;
};
#endif // RESEARCHASSISTANT_H_INCLUDE

#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

class Person        // definition of class Person
{
public:
    Person(int = 0, std::string = "n/a");       // default constructor Person(id, name)

    void set_id(int);       // getter and setter for id variable
    int get_id() const;

    void set_name(std::string);         // getter and setter for name variable
    std::string get_name() const;

    std::string print() const;          // print function returning properties of object

private:
    std::string name;       // variables for name and id
    int id;
};
#endif // PERSON_H_INCLUDED

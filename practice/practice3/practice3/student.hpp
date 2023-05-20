#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>

using std::string;

class Student
{
private:
    string _name;
    string _lastName;
    string _group;
    int _rating;
public:
    Student(string name, string lastName, string group, int rating)
        : _name(name), _lastName(lastName), _group(group), _rating(rating) {};

    Student()
        : _name("empty"), _lastName("empty"), _group("empty"), _rating(-1) {};

    string getName() const { return _name; }
    string getLastName() const { return _lastName; }
    string getGroup() const { return _group; }
    int getRating() const { return _rating; }

    string toString() const;

    friend std::istream & operator>>(std::istream & input, Student & student);
};

bool operator==(Student & left, Student & right);

std::istream & operator>>(std::istream & input, Student & student);
std::ostream & operator<<(std::ostream & output, const Student & student);

#endif // STUDENT_H

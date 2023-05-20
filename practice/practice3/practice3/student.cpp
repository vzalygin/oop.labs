#include "student.hpp"

bool operator==(Student & left, Student & right) {
    return  (left.getName() == right.getName()) &&
            (left.getLastName() == right.getLastName()) &&
            (left.getGroup() == right.getGroup()) &&
            (left.getRating() == right.getRating());
}

string Student::toString() const {
    return _name + " " + _lastName + " (группа " + _group + ") " + std::to_string(_rating) + "/100";
}

std::istream & operator>>(std::istream & input, Student & student) {
    input >> student._name >> student._lastName >> student._group >> student._rating;
    return input;
}

std::ostream & operator<<(std::ostream & output, const Student & student) {
    output << student.getName() << " " << student.getLastName() << " " << student.getGroup() << " " << student.getRating() << " ";
    return output;
}

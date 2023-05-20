#include "repository.hpp"

#include <fstream>
void Repository::load() {
    Student s;
    _students.clear();

    std::ifstream in(_path, std::ios::in);
    while (in >> s) {
        _students.push_back(s);
    }
    in.close();
}

void Repository::save() {
    std::ofstream out(_path, std::ios::out | std::ios::trunc);
    for (const auto & student : _students) {
        out << student;
    }
    out.close();
}

void Repository::append(Student student) {
    _students.push_back(student);
    save();
}

void Repository::remove(unsigned int index) {
    _students.erase(_students.begin()+index);
    save();
}

Group Repository::groupBy(bool (*predicate)(const Student &, const Student &)) {
    Group res;

    for (const auto & student : _students) {
        bool isInGroup = false;
        for (auto & group : res) {
            if (predicate(student, group[0]) && !isInGroup) {
                group.push_back(Student(student));
                isInGroup = true;
            }
        }
        if (!isInGroup) {
            res.push_back({Student(student)});
        }
    }

    return res;
}

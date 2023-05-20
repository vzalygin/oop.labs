#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include <string>

#include <student.hpp>


typedef std::vector<std::vector<Student>> Group;

class Repository
{
private:
    std::vector<Student> _students;
    std::string _path;

    void load();
    void save();

public:
    Repository(string path)
        :_path(path) { load(); };

    void append(Student student);
    void remove(unsigned int index);
    Group groupBy(bool (* predicate)(const Student &, const Student &));
    std::vector<Student> getStudents() const { return _students; }
};
#endif // REPOSITORY_H

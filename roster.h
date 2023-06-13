#include <vector>
#include "student.h"

class Roster {
private:
    vector<Student*> classRosterArray;

public:
    //wil add a student to the roster
    void add(const string& studentID, const string& firstName, const string& lastName,
        const string& emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
        DegreeProgram degreeProgram);

    // remove a student from roster
    void remove(const string& studentID);

    // print all student data
    void printAll() const;

    // print the average number of days in the course
    void printAverageDaysInCourse(const string& studentID) const;

    // print all students with invalid email addresses
    void printInvalidEmails() const;

    // print the degree program
    void printByDegreeProgram(DegreeProgram degreeProgram) const;

    // Destructor
    ~Roster();
};


#include <string>
#include "degree.h"

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;

public:
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress,
        int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

    // these are the getters
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram() const;

    // these are the setters
    void setStudentID(const string& studentID);
    void setFirstName(const string& firstName);
    void setLastName(const string& lastName);
    void setEmailAddress(const string& emailAddress);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    void setDegreeProgram(DegreeProgram degreeProgram);

    // this will print the students information
    void print() const;
};
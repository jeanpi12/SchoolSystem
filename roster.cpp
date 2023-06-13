#include <iostream>
#include "roster.h"

// add a student to the roster
void Roster::add(const string& studentID, const string& firstName, const string& lastName,
    const string& emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
    DegreeProgram degreeProgram) {
    Student* student = new Student(studentID, firstName, lastName, emailAddress, age,
        daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    classRosterArray.push_back(student);
}

// remove a student from the roster
void Roster::remove(const string& studentID) {
    bool found = false;
    for (auto i = classRosterArray.begin(); i != classRosterArray.end(); ++i) {
        if ((*i)->getStudentID() == studentID) {
            found = true;
            delete* i;
            classRosterArray.erase(i);
            break;
        }
    }
    if (!found) {
        cout << "Error: Student with ID " << studentID << " not found." << endl;
    }
}

// print all student data
void Roster::printAll() const {
    for (const auto& student : classRosterArray) {
        student->print();
    }
}

// print the average number of days in the courses
void Roster::printAverageDaysInCourse(const string& studentID) const {
    bool found = false;
    for (const auto& student : classRosterArray) {
        if (student->getStudentID() == studentID) {
            found = true;
            int* daysInCourse = student->getDaysInCourse();
            int averageDays = (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3;
            cout << "Average days in courses for student " << studentID << ": " << averageDays << endl;
            break;
        }
    }
    if (!found) {
        cout << "Error: Student with ID " << studentID << " not found." << endl;
    }
}

// print all students with invalid email addresses
void Roster::printInvalidEmails() const {
    cout << "Invalid email addresses:" << endl;
    for (const auto& student : classRosterArray) {
        string email = student->getEmailAddress();
        if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
            cout << student->getStudentID() << ": " << email << endl;
        }//remember npos means no-position. no matches found in a string.
    }
}

// print all students in a specific degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    cout << "Students in the " << (degreeProgram == SECURITY ? "Security" : degreeProgram == NETWORK ? "Network" : "Software")
        << " degree program:" << endl;

    for (const auto& student : classRosterArray) {
        if (student->getDegreeProgram() == degreeProgram) {
            student->print();
        }
    }
}

// Destructor
Roster::~Roster() {
    for (const auto& student : classRosterArray) {
        delete student;
    }
}

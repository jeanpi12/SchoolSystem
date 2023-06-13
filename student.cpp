#include <iostream>
#include "student.h"

Student::Student() {}

Student::Student(string studentID, string firstName, string lastName, string emailAddress,
    int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
    : studentID(studentID), firstName(firstName), lastName(lastName), emailAddress(emailAddress),
    age(age), degreeProgram(degreeProgram) {
    daysInCourse[0] = daysInCourse1;
    daysInCourse[1] = daysInCourse2;
    daysInCourse[2] = daysInCourse3;
}

// Getter instances
string Student::getStudentID() const {
    return studentID;
}

string Student::getFirstName() const {
    return firstName;
}

string Student::getLastName() const {
    return lastName;
}

string Student::getEmailAddress() const {
    return emailAddress;
}

int Student::getAge() const {
    return age;
}

int* Student::getDaysInCourse() {
    return daysInCourse;
}

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

// Setter instances
void Student::setStudentID(const string& studentID) {
    this->studentID = studentID;
}

void Student::setFirstName(const string& firstName) {
    this->firstName = firstName;
}

void Student::setLastName(const string& lastName) {
    this->lastName = lastName;
}

void Student::setEmailAddress(const string& emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
    daysInCourse[0] = daysInCourse1;
    daysInCourse[1] = daysInCourse2;
    daysInCourse[2] = daysInCourse3;
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

// print instances
void Student::print() const {
    cout << "Student ID: " << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
        << "\tEmail: " << emailAddress << "\tAge: " << age
        << "\tDays in Courses: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2]
        << "}\tDegree Program: ";

    // will print from the degree program
    switch (degreeProgram) {
    case SECURITY:
        cout << "Security";
        break;
    case NETWORK:
        cout << "Network";
        break;
    case SOFTWARE:
        cout << "Software";
        break;
    }

    cout << endl;
}

#include <iostream>
#include "roster.h"

int main() {
    cout << "Scripting and Programming - Applications - C867 " << endl;
    cout << "Programming Language: C++" << endl;
    cout << "Name: Jean-Pierre Atiles" << endl;
    cout << "Student ID: 011028774" << endl<< endl << endl;

    Roster classRoster;

    // add students to the roster
    classRoster.add("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("A5", "Jean", "Atiles", "jatile1@wgu.edu", 22, 15, 20, 25, SOFTWARE);

  
    classRoster.printAll();
    cout << endl<<endl;
    classRoster.printAverageDaysInCourse("A1");
    cout << endl<<endl;
    classRoster.printInvalidEmails();
    cout << endl<<endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl<<endl;
    classRoster.remove("A3");
    cout << endl<<endl;
    classRoster.printAll(); //print after removing the the student with ID A3

    return 0;
}

#include <iostream>
using namespace std;

// Base Class
class Student
{
protected:
    int rollNo;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void showStudent()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Single Inheritance
class Marks : public Student
{
protected:
    int marks;

public:
    void getMarks()
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }

    void showMarks()
    {
        cout << "Academic Marks: " << marks << endl;
    }
};

// Hierarchical Inheritance
class Attendance : public Student
{
protected:
    int attendance;

public:
    void getAttendance()
    {
        cout << "Enter Attendance Percentage: ";
        cin >> attendance;
    }

    void showAttendance()
    {
        cout << "Attendance: " << attendance << "%" << endl;
    }
};

// Multiple Inheritance
class ExtraCurriculum
{
protected:
    int activityScore;

public:
    void getActivity()
    {
        cout << "Enter Extra Curriculum Score: ";
        cin >> activityScore;
    }

    void showActivity()
    {
        cout << "Extra Curriculum Score: " << activityScore << endl;
    }
};

// Hybrid + Multilevel Inheritance
class FinalResult : public Marks, public ExtraCurriculum
{
    int finalScore;

public:
    void calculateResult()
    {
        finalScore = (marks + activityScore) / 2;
    }

    void displayResult()
    {
        showStudent();
        showMarks();
        showActivity();

        cout << "Final Score: " << finalScore << endl;
    }
};

int main()
{
    cout << "----- Final Result Section -----" << endl;

    FinalResult f;

    f.getStudent();
    f.getMarks();
    f.getActivity();

    f.calculateResult();

    cout << "\nStudent Result Details" << endl;
    f.displayResult();

    cout << "\n----- Attendance Section -----" << endl;

    Attendance a;

    a.getStudent();
    a.getAttendance();

    cout << "\nAttendance Details" << endl;
    a.showStudent();
    a.showAttendance();

    return 0;
}

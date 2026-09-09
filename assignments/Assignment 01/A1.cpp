#include<bits/stdc++.h>
using namespace std;
class Student 
{
private:
    string name;
    int rollNo;
    float marks;
public:
    // Constructor
    Student() 
    {
        name = "Unknown";
        rollNo = 0;
        marks = 0;
        cout << "Constructor called." << endl;
    }
    void inputData() 
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayData() 
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name      : " << name << endl;
        cout << "Roll No.  : " << rollNo << endl;
        cout << "Marks     : " << marks << endl;
    }

    // Destructor
    ~Student() 
    {
        cout << "\nDestructor called." << endl;
    }
};
int main() {
    Student s;
    s.inputData();
    s.displayData();
    return 0;
}

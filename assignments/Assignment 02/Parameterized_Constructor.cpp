#include <iostream>
using namespace std;

class Student {
    public:
    int age;
    string name;
    int PRN;

    Student(int a, string b, int c){
    age = a;
    name = b;
    PRN = c;
    }

    void display(){
    cout << "Name of the student :  " << name << endl;
    cout << "Age : " << age << endl;
    cout << "PRN : " << name << endl;
    }
};

int main(){
    Student s1(19, "Swanit", 203);
    s1.display();
    return 0;
}

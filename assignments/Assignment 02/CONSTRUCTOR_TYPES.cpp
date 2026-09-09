#include <iostream>
using namespace std;

class Student {
    public:
        int age;
        string name;
        int PRN;

        Student(){
        name = "Swanit";
        age = 19;
        PRN = 203;
        }

        void display(){
        cout << "Name of the student is: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "PRN: " << PRN << endl;
        }
};

int main(){
    Student s1;
    s1.display();
    return 0;
}

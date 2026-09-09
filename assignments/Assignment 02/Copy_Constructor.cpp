#include <iostream>
using namespace std;

class Student {
    public:
    int age;
    string name;
    int PRN;

    Student(string b, int a, int x){
    name = b;
    age = a;
    PRN = x;
    }

    Student(const Student &obj){
    name = obj.name;
    age = obj.age;
    PRN = obj.PRN;
    }

    void display(){
    cout << "Name the student is : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "PRN : " << PRN << endl;
    }
};

int main(){
    Student s1("Swanit",19,203);
    Student s2 = s1;
    s2.display();
    return 0;
}

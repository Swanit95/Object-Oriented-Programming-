#include <iostream>
using namespace std;
void modifyUsingPointer(int *p)
{
    *p = 100;
}
void modifyUsingReference(int &x)
{
    x = 200;
}
void swapUsingPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapUsingReferences(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 10;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    int *p = &x;
    cout << "Address stored in p: " << p << endl;
    cout << "Value through p: " << *p << endl;
    *p = 50;
    cout << "After pointer assignment: " << x << endl;
    int &r = x;
    r = 75;
    cout << "After reference assignment: " << x << endl;
    modifyUsingPointer(&x);
    cout << "After pointer function: " << x << endl;
    modifyUsingReference(x);
    cout << "After reference function: " << x << endl;
    int a = 10;
    int b = 20;
    swapUsingPointers(&a, &b);
    cout << "After pointer swap: ";
    cout << "a = " << a << ", b = " << b << endl;
    swapUsingReferences(a, b);
    cout << "After reference swap: ";
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

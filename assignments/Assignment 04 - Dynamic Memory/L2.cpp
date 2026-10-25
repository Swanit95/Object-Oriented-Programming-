#include <iostream>
using namespace std;

class StudentMarks
{
private:
    float *marks;
    int n;

public:
    StudentMarks(int size)
    {
        n = size;
        marks = new float[n];

        cout << "Memory allocated for "
             << n << " students." << endl;
    }

    void inputMarks()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter marks of student "
                 << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    float calculateAverage()
    {
        float total = 0;

        for (int i = 0; i < n; i++)
        {
            total += marks[i];
        }

        return total / n;
    }

    void displayAboveAverage()
    {
        float average = calculateAverage();
        bool anyAbove = false;

        for (int i = 0; i < n; i++)
        {
            if (marks[i] > average)
            {
                cout << "Student " << i + 1 << " scored above average: " << marks[i] << endl;
                anyAbove = true;
            }
        }

        if (!anyAbove)
        {
            cout << "None scored above average."
                 << endl;
        }
    }

    ~StudentMarks()
    {
        delete[] marks;

        cout << "Memory released for "
             << n << " students." << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students." << endl;
        return 1;
    }

    StudentMarks obj(n);

    obj.inputMarks();
    obj.displayAboveAverage();

    return 0;
}

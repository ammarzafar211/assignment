#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string grades;
    int creditHours, num, subjects;
    double gradespoint, sumHours, point, sumPoints, SGPA;
    cout << "Input the total Number Of Subject: ";
    cin >> subjects;

    for (num = 1; num <= subjects; num++)
    {
        cout << "Please Input the Credit Hours: ";
        cin >> creditHours;
        cout << "Please Input the Grades: ";
        cin >> grades;

        if (grades == "A" || grades == "a")
        {
            point = 4.00;
        }
        else if (grades == "A-" || grades == "a-")
        {
            point = 3.75;
        }

        else if (grades == "B+" || grades == "b+")
        {
            point = 3.75;
        }
        else if (grades == "B" || grades == "b")
        {
            point = 3.00;
        }
        else if (grades == "C+" || grades == "c+")
        {
            point = 2.5;
        }
        else if (grades == "C" || grades == "c")
        {
            point = 2.00;
        }
        else if (grades == "D+" || grades == "d+")
        {
            point = 1.50;
        }

        else if (grades == "D" || grades == "d")
        {
            point = 1.00;
        }

        gradespoint = point * creditHours;
        sumHours += creditHours;
        sumPoints += gradespoint;
    }
    cout << "Here is the Final SGPA: " << setprecision(2) << sumPoints / sumHours << endl;
}
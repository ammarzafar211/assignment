#include <iostream>
using namespace std;
int main()
{
    double mathMarks, phyMarks, chemMarks, TotalInThree, totalInTwoSub, mathsAndPhys;
    cout << "Please Input Your Number Of Maths: ";
    cin >> mathMarks;
    cout << "Please Input Your Number Of Physics: ";
    cin >> phyMarks;
    cout << "Please Input Your Number Of Chemistry: ";
    cin >> chemMarks;

    mathsAndPhys = mathMarks + phyMarks;

    if (TotalInThree >= 190 || mathsAndPhys >= 140)
    {

        if (mathMarks < 65)
        {
            cout << "You are legging in the maths Marks!" << endl;
        }
        else if (phyMarks < 55)
        {
            cout << "You are legging in the Physics marks!" << endl;
        }
        else if (chemMarks < 50)
        {
            cout << "You are legging in chemistry Marks! " << endl;
        }
        else
            cout << "You are Eligible for the Admission!" << endl;
    }

    else
    {
        cout << "You are Not Eligible For the Admission!" << endl;
    }
}
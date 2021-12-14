#include <iostream>
using namespace std;
int main()
{
    int num, min = -99, max = 0, input, sum = 0;
    while (num != -99)
    {
        cout << "Please Enter the  Entries : ";
        cin >> num;
        if (num == -99)
        {
            break;
        }
        if (min == -99 || num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }

        sum = sum + num;
    }
    cout << "Here is the sum: " << sum << endl;
    cout << "Here is the largest Number: " << max << endl;
    cout << "Here is the smallest Number: " << min << endl;
}
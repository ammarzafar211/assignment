#include <iostream>
using namespace std;
int main()
{

    double totalBudget, numOfItems, num = 1, items, sum, option;

    cout << "Input the Total Budget of the Month: ";
    cin >> totalBudget;

    while (num < totalBudget)
    {
        cout << "Press 1 if you wanna add a Item: " << endl;
        cout << "Press 2 if you wanna End the Program." << endl;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter the budget of " << num << " Item : ";
            cin >> items;
            sum = sum + items;
            num++;
        }
        if (option == 2)
        {
            break;
        }
    }
    if (sum > totalBudget)
    {
        cout << "Your total expenses of the" << totalBudget << " month is exceeding: " << sum - totalBudget << endl;
    }
    else if (sum < totalBudget)
    {
        cout << "Your total expenses of the Month is within your budget \n"
             << "Your remaining balances is: " << totalBudget - sum << endl;
    }
}

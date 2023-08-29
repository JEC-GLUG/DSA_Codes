#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n), where n is the length of the given number
// Space Complexity: O(1)

int main()
{

    int number;
    cin >> number;
    int newNumber = 0;
    while (number != 0)
    {
        //Check if the number goes out of bound of int size
        if (newNumber > INT_MAX / 10 || newNumber < INT_MIN / 10)
        {
            newNumber = 0;
            break;
        }
        int digit = number % 10;
        newNumber = newNumber * 10 + digit;
        number = number / 10;
    }

    cout << newNumber << endl;

    return 0;
}
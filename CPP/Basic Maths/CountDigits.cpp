#include <bits/stdc++.h>
using namespace std;

// Time Complexity = O(N)
// Space Complexity = O(1)
int countDigitByLoop(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

// Time Complexity = O(1)
// Space Complexity = O(1)
int countDigitsByString(int n)
{
    string num = to_string(n);
    return num.length();
}

// Time Complexity = O(1)
// Space Complexity = O(1)
int countDigitsByLog(int n)
{
    int digits = floor(log10(n) + 1);
    return digits;
}

int main()
{

    int number;
    cin >> number;
    cout << "Digits by loop: " << countDigitByLoop(number) << endl;
    cout << "Digits by string: " << countDigitsByString(number) << endl;
    cout << "Digits by log: " << countDigitsByLog(number) << endl;
    return 0;
}
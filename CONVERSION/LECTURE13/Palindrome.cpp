// check the number is palindrome or not
#include<iostream>
using namespace std;

int main()
{
    int num, rem;
    int original;
    int ans = 0;

    cout << "Enter the number: ";
    cin >> num;

    if (num < 1)
    {
        cout << "The number is not a palindrome." << endl;
        return 0;
    }

    original = num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;

        if (ans > INT_MAX / 10)
        {
            cout << "Result is 0 due to overflow." << endl;
            return 0;
        }

        ans = ans * 10 + rem;
    }

    if (original == ans)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
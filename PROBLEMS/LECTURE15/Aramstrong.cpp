// Check the number is armstrong or not
#include <iostream>
#include <cmath>
using namespace std;

int digit(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}
bool armstrong(int num, int digit)
{
    int total = 0;
    int n = num;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        total = total + pow(rem, digit);
    }
    if (total == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout<<"enter the number:"<<endl;
    cin >> num;
    int total_digit = digit(num);
    cout << armstrong(num, total_digit);
    return 0;
}

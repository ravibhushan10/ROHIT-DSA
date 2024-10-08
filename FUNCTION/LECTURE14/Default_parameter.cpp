// Use of default parameter

#include <iostream>
using namespace std;

int sum(int a = 12, int b = 10) // default parameter
{
    int ans = a + b;
    return ans;
}
int sum(int a, int b, int c)
{
    int ans = a + b + c;
    return ans;
}
int main()
{
    int a, b, c;
    cout << "enter the valu of a , b and c:" << endl;
    cin >> a >> b >> c;
    cout << "The sum is :" << sum(a, b, c) << endl;
    cout << "The sum is :" << sum(a, b) << endl;

    return 0;
};
#include <iostream>
long long int fact (int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
        return (n*fact(n-1));
    }
}
int main(void)
{
    int n;

    while (1)
    {
        std ::cout << "enter the number:";
        std ::cin >> n;
        if (n >= 0)
        {
            break;
        }
        std ::cout << "please enter the positive number:";
    }
    std ::cout<<"Factorial of "<<n<<" is:"<<fact(n);

    // long long int result = 1;
    // if (n!=0)
    // {
    //     for (int i = n; i > 0; i--)
    //     {
    //         result = result * i;
    //     }
    // std ::cout << "Factorial of " << n << " is:" << result;
    // }
    // else
    // {
    //     std ::cout << "The factorial is: 1";
    // }

    return 0;
}


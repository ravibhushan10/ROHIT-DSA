#include <iostream>
int main(void)
{
    int n;
    std ::cout << "enter the number:";
    std ::cin >> n;
    int pow;
    while (true)
    {
        std ::cout << "enter the pow:";
        std ::cin >> pow;

        if (pow >= 0)
        {
            break;
        }
        std ::cout << "please enter the postive number:";
    }
    int result = n;
    if (pow == 0)
    {
        std ::cout << "The value is: 1";
    }

    else
    {
        for (int i = 1; i < pow; i = i + 1)
        {
            result = result * n;
        }
        std ::cout << "The value is:" << result;
    }
    return 0;
}
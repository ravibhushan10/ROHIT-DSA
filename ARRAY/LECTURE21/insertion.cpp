// insertion srot
#include <iostream>

int main(void)
{
    int n, arr[100];
    
    do
    {
        if (n <= 0 || n > 100)
        {
            std ::cout << "enter the size of array upto 100 size:";
            std ::cin >> n;
            std ::cout << "please enter the valid size :"<<std ::endl;
        }
    } while (n <= 0 || n > 100);

    std ::cout << "enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        std ::cin >> arr[i];
    }

    // using insertion sort algorithm
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                std ::swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    std ::cout << "After sorting, the array is:";
    for (int i = 0; i < n; i++)
    {
        std ::cout << arr[i] << " ";
    }
    return 0;
}
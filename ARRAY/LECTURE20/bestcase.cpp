// Best case for Bubble sort algorithm
#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << "enter the size of arry:";
    cin >> n;
    cout << "enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "your  unsorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int j = n-1; j > 0; j--)
    {
        bool count=0;
        for (int i = 0; i < j ; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                count=count+1;
            }
        }
        if(count==0)
        {
            break;
        }
    }
    
    // cout << "Your sorted array in decreasing order:";
    // for (int i=n; i >0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << "Your sorted array in increasing  order:";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
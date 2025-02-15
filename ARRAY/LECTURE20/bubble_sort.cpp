// // sorting by bubble sort
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={4,19,7,5,9};

//     for(int j=5;j>0;j--)
//     {
//     for(int i=0;i<j-1;i++)
//     {
//         if(arr[i]>arr[i+1])
//         {

//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }
//     }
//     cout<<"Your sorted array is:";
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    char arr[1000];
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
        for (int i = 0; i < j ; i++)
        {
            if (arr[i] > arr[i + 1])
            {

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    cout << "Your sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
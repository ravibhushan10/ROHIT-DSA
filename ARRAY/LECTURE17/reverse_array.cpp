// // Reversed an given array

// // First method
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int temp[100];
//     int n;
//     cout<<"enter the size of array:";
//     cin>>n;
//    cout<<"enter the elements of array:"<<endl;
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }
//    cout<<"your orignal array is:"<<endl;
//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    int i=n-1;
//    int j=0;
//     while(i>=0)
//     {
//         temp[j]=arr[i];
//         i--;
//         j++;
//     }
//     cout<<"your reversed arry is:"<<endl;
//     for(int j=0;j<5;j++)
//     {
//         cout<<temp[j]<<" ";
//     }

// return 0;
// }


// Second method
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={8,9,7,5,7,6};
    int i=0;
    int j=5;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}

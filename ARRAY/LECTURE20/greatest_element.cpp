// Find the greatest element and replace to last element in an array

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={12,20,7,5,1};
    int big=arr[0];
    int index=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]>arr[0])
        {
            big=arr[i];
            index=i;
        }
    } 
    int temp=arr[4];
    arr[4]=arr[index];
    arr[index]=temp;
    cout<<"now your array is:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}

// this is use in bubble sort to give the postion at last of greatest element
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={4,19,7,5,9};
 
    
//     for(int i=0;i<4;i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
           
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }
//     cout<<"now your arra is:";
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }
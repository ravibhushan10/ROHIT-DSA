// find the minimum  element in array
#include <iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i=i+1)
    {
        cin>>arr[i];
    }
    cout<<"your  array is :"<<endl;
    for(int i=0;i<n;i=i+1)
    {
        cout<<arr[i]<<" ";
    }

cout<<endl;

// first method

int ans=INT_MAX;
for(int i=0;i<n;i=i+1)
{
    if(arr[i]<ans)
    {
        ans=arr[i];
    }
}
 cout<<"your smallest number is:"<<ans<<endl;

// second method

// int ans=arr[0];
//     for(int i=1;i<n;i=i+1)
//     {
//        if(arr[i]<ans)
//        {
//          ans=arr[i];
//        }
//     }
//     cout<<"your smallest number is:"<<ans<<endl;
    return 0;
}

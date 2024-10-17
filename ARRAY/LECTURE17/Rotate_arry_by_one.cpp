#include<iostream>
using namespace std;
int main()
{
    int arr[1000],n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"your array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;

    cout<<"your rotated array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
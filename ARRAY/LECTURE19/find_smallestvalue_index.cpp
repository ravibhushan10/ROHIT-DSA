// find smallest element an array and its index value
#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  cout<<"enter the size of arry:";
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
  int index=0;
  int element=arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i]<arr[index])
    {
        index=i;
        element=arr[i];
    }
  }
  cout<<"the smallest element at index:"<<index<<endl;;
  cout<<"the smallest element is:"<<element;
return 0;
}
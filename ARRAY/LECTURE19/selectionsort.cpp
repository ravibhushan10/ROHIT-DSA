// sort an array using selection sort
// time complexity= o(n*n)
#include<iostream>
using namespace std;
int main()
{
   int arr[1000];
  int n;
  cout<<"enter the size of arry:";
  cin>>n;
  cout<<"enter the elements of array:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"your  unsorted array is:";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;  
  
  for(int i=0;i<n-1;i++)
  {

  int index=i;
  
  for(int j=i+1;j<n;j++)
  {
    if(arr[j]<arr[index])
    {
        index=j;

    }
  }
//   swap(arr[i],arr[index]);
  int tem=arr[i];
  arr[i]=arr[index];
  arr[index]=tem;
  }

  cout<<"your sorted array is:";
  for(int i=n-1;i>=0;i--)
  {
    cout<<arr[i]<<" ";
  }
return 0;
}
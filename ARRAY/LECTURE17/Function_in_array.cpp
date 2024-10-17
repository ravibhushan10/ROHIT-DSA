#include<iostream>
using namespace std;
void fun(int a[], int n)
{
    cout<<sizeof(a)<<endl;
    // ans=8 bytes because it sotre address it is not an array 
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[5]={7,8,9,8,5};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
return 0;
}
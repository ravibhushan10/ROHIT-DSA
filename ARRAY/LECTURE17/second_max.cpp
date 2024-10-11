// Find the second maximum element an array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,5,8,7};
    int ans=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    int second =INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(ans!=arr[i])
        {
            second=max(second,arr[i]);
        }
    }
    cout<<"the second maximum element is:"<<second;
return 0;
}

// // Simple printing fobonacci series
// #include<iostream>
// using namespace std;
// int main()
// {
//     int last=0,pre=1;
//     int n,next;
//     cout<<"enter the terms to find fobonacci series:";
//     cin>>n;
//     cout<<"your fibonacci series is:"<<last<<" "<<pre<<" ";
//     for(int i=2;i<n;i++)
//     {
//          next=pre+last;
//         last=pre;
//         pre=next;
//     cout<<next<<" ";
//     }
// return 0;
// }

// finding any fibonacci number using arry
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the terms you find :";
    cin>>n;
    int arr[1000];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=n-1;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"the "<<n<<"  fibonacci number is:"<<arr[n-1];
return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the term of fibbonaci number"<<endl;
    cin>>n;
    int curr,pre=1,last=0;
    cout<<"fibonacci series is:"<<last<<" "<<pre<<" ";
    for(int i=3;i<=n;i=i+1)
    {
         curr=pre+last;
         last=pre;
         pre=curr;
         cout<<curr<<" ";
    }
}
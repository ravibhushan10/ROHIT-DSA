// // sum of digit in total
#include<iostream>
using namespace std;

int main()
{
    int num,rem;
    int ans=0;
    cout<<"enter the number:";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=ans+rem;
    }
    cout<<"the sum of digit is:"<<ans;
return 0;
}
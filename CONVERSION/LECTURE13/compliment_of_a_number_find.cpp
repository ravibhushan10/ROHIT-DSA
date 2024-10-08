// find the compliment of a number
#include<iostream>
using namespace std;

int main()
{
    int num;
    int mul=1;
    int rem,ans=0;
    cin>>num;
    if(num==0)
    {
        return 1;
    }
    while(num>0)
    {
        rem=num%2;
        rem=!rem; 
        // you can use rem^1;
        num=num/2;
        ans=ans+rem*mul;
        mul=mul*2;
    }
    cout<<"the compliment of number is:"<<ans;
    return 0;
}

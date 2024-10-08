// // reverse the digit
#include <iostream>
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
        ans=ans*10+rem;
    }
    cout<<"the reverse number is:"<<ans;
return 0;
}
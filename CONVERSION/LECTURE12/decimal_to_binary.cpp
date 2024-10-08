// decimal to binary conversion 
#include<iostream>
using namespace std;
int main()
{
    int num,mul=1;
    int rem,ans=0;
    cout<<"enter the  decimal number :";
    cin>>num;
    while(num!=0)  
    // or (num>0) 
    {
         rem= num%2;
         num=num/2;
         ans=rem*mul+ans;
         mul=mul*10;
    }
    cout<<"the binary  number is:"<<ans;
    // if ans is 22475858 due to 32 bit interger store karta ha only
return 0;
}
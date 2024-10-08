// Decimal to octal conversion
#include<iostream>
using namespace std;


int main()
{
    int num,mul=1 ;
    int rem,ans=0;
    cout<<"enter the decimal number:";
    cin>>num;
    while(num>0)  
    // or (num>0) 
    {
         rem= num%8;
         num=num/8;
         ans=rem*mul+ans;
         mul=mul*10;
         
    }
    cout<<"the octal  number is:"<<ans;
    
return 0;
}
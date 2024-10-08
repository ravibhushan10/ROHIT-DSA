// Binary to decimal conversion
#include<iostream>
using namespace std;


int main()
{
    int num,mul=1 ;
    int rem,ans=0;
    cout<<"enter the binary number:";
    cin>>num;
    while(num>0)  
    // or (num>0) 
    {
         rem= num%10;
         num=num/10;
         ans=rem*mul+ans;
         mul=mul*2;
         
    }
    cout<<"the decimal  number is:"<<ans;
    
return 0;
}
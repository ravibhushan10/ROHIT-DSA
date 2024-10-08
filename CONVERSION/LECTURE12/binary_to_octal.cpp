// Binary to octal conversion
#include<iostream>
using namespace std;


int main()
{
    int num,mul=1 ;
    int rem,ans=0;
    
    cout<<"enter the binary  number:";
    cin>>num;
    while(num>0)  
    // or (num>0) 
    {
         rem= num%10;
         num=num/10;
         ans=rem*mul+ans;
         mul=mul*2;
         
    }
    cout<<"the decimal  number is:"<<ans<<endl;
    int octal=0;
    int sum=1;
    while(ans>0)
    {
        
         rem= ans%8;
         ans=ans/8;
         octal=rem*sum+octal;
         sum=sum*10;
         
    }
    cout<<"the octal  number is:"<<octal;
    
return 0;
}
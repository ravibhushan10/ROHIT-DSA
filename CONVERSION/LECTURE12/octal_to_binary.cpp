// Octal to binary conversion
#include<iostream>
using namespace std;


int main()
{
    int num,mul=1 ;
    int rem,ans=0;
    
    cout<<"enter the octal  number:";
    cin>>num;
    while(num>0)  
    // or (num>0) 
    {
         rem= num%10;
         num=num/10;
         ans=rem*mul+ans;
         mul=mul*8;
         
    }
    cout<<"the decimal  number is:"<<ans<<endl;
    int octal=0;
    int sum=1;
    while(ans>0)
    {
        
         rem= ans%2;
         ans=ans/2;
         octal=rem*sum+octal;
         sum=sum*10;
         
    }
    cout<<"the binary  number is:"<<octal;
    
return 0;
}



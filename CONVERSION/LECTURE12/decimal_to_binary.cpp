// decimal to binary conversion 
#include<iostream>
#include<climits>
int main(void)
{
    int n;
    std ::cout<<"enter the decimal number:";
    std ::cin>>n;
    if(n==0)
    {
       return 0;
    }
    int rem,ans=0,mul=1;
    while (n>0)
    {
      rem= n%2;
      n=n/2;
      ans=rem*mul+ans; 
      mul=mul*10;

    }
    std ::cout<<"Binary number is:"<<ans;
   return 0;
}
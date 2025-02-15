#include<iostream>
#include<climits>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;
    int rem, ans=0;
    while(n>0)
    {
       rem=n%10;
       if(ans>(INT_MAX/10) || ans<(INT_MIN)/10 )/*Handling for large integer */
       {
        std ::cout<<"it is not fit in int data type";
        break;
       }
       ans=ans*10+rem;
       n=n/10;
    }
    std ::cout<<"Reverse number is :"<<ans;
   return 0;
}
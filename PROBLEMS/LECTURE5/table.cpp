#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number you want table:";
    std ::cin>>n;
    
    for(int i=1;i<=10; i++)
    {
        std ::cout<<n<<"*"<<i<<"="<<n*i<<std ::endl;
    }
   return 0;
}
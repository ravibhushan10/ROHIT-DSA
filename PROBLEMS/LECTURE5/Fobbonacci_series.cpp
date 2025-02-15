#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the  number:";
    std ::cin>>n;

    int last=0,pre=1,curr;
    std ::cout<<"Fobboncci series is:"<<last<<" "<<pre<<" ";

    for(int i=3; i<=n;i++)
    {
        curr=pre+last;
        last=pre;
        pre=curr;
        std ::cout<<curr<<" ";
    }
   return 0;
}
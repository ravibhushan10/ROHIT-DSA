// Print these type of pattern for any value
//                *
//              * *
//            * * *
//          * * * *
//        * * * * *
#include<iostream>
int main(void)
{
     int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;
    
   for(int i=1;i<=n;i++)
   {
    
    for(int j=1;j<=n-i;j++)
    {
        std ::cout<<"  ";
    }
    for(int k=1;k<=i;k++)
    {
        std ::cout<<"*"<<" ";
    }
    std ::cout<<std ::endl;
   }
   return 0;
}
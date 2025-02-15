// Print these type of pattern for any value
//       * * * * *
//       * * * *
//       * * *
//       * *
//       *
#include<iostream>
int main(void)
{
     int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;
   
   for(int i=n;i>0;i--)
   {
     for(int j=i;j>0;j--)
     {
        std ::cout<<"*"<<" ";
     }
     std ::cout<<std ::endl;
   }
   return 0;
}

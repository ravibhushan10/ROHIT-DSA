// Print these type of pattern for any number
//       1
//       2 1
//       3 2 1
//       4 3 2 1
//       5 4 3 2 1
#include<iostream>
int main(void)
{
     int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;
   
   for(int i=1;i<=n;i++)
   {
     for(int j=i;j>0;j--)
     {
        std ::cout<<j<<" ";
     }
     std ::cout<<std ::endl;
   }
   return 0;
}



// Print these type of pattern for any value
//       1 2 3 4 5 
//       1 2 3 4 
//       1 2 3
//       1 2
//       1
#include<iostream>
int main(void)
{
     int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;
    
   for(int i=n;i>0;i--)
   {
    for(int j=1;j<=i;j++)
    {
        std ::cout<<j<<" ";
    }
    std ::cout<<std ::endl;
   }
   return 0;
}

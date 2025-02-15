// Print these type of pattern for any value
//      5 
//      5 4 
//      5 4 3 
//      5 4 3 2 
//      5 4 3 2 1 
#include<iostream>
int main(void)
{
     int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;
    
   for(int i=n;i>0;i--)
   {
    for(int j=n;j>=i;j--)
    {
        std ::cout<<j<<" ";
    }
    std ::cout<<std ::endl;
   }
   return 0;
}
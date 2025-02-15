// Print these type of pattern for any value
//             1
//           1 2 1
//         1 2 3 2 1
//       1 2 3 4 3 2 1
//     1 2 3 4 5 4 3 2 1
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
        std ::cout<<k<<" ";
    }
    for(int l=i-1;l>0;l--)
    {
        std ::cout<<l<<" ";
    }
    std ::cout<<std ::endl;
   }
   return 0;
}
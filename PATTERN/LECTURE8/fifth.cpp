// Print these type of pattern for any value
//             1
//           2 1
//         3 2 1
//       4 3 2 1
//     5 4 3 2 1
#include<iostream>


int main()
{
    int n;
   std :: cout<<"enter the number:";
   std :: cin>>n;
    for(int i=1;i<=n;i=i+1)
{
    for(int j=1;j<=n-i;j=j+1)
    {
       std :: cout<<"  ";
    }
    for(int k=i;k>0;k=k-1)
    {
       std :: cout<<k<<" ";
    }
   std :: cout<<std::endl;
}
return 0;
}
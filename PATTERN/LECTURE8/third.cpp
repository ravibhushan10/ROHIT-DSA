// Print these type of pattern for any value
//              1 
//            1 2 
//          1 2 3 
//        1 2 3 4 
//      1 2 3 4 5 
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
    for(int k=1;k<=i;k=k+1)
    {
       std :: cout<<k<<" ";
    }
   std :: cout<<std::endl;
}
return 0;
}
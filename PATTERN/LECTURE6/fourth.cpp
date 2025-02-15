// Print these type of pattern for any number    
//      5 4 3 2 1
//      5 4 3 2 1
//      5 4 3 2 1
//      5 4 3 2 1
//      5 4 3 2 1
#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    for(int i=1;i<=n;i=i+1)
    {
        for(int j=5;j>0;j=j-1)
        {
            std ::cout<<j<<" ";
        }
        std ::cout<<std ::endl;
    }
   return 0;
}
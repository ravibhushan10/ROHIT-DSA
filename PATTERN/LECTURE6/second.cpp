    //  Print these type of pattern for any number
    //  1 1 1 1 1 
    //  2 2 2 2 2 
    //  3 3 3 3 3 
    //  4 4 4 4 4 
    //  5 5 5 5 5 
#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    for(int i=1;i<=n;i=i+1)
    {
        for(int j= 1; j<=5; j=j+1)
        {
            std ::cout<<i<<" ";
        }
        std ::cout<<std ::endl;
    }
   return 0;
}
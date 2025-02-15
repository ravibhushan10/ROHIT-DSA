// Print these type of pattern for any number
//      1 
//      1 2 
//      1 2 3
//      1 2 3 4
//      1 2 3 4 5
#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    for(int row=1;row<=n;row=row+1)
    {
        for(int j=1;j<=row;j++)
        {
            std ::cout<<j<<" ";
        }
        std ::cout<<std ::endl;
    }
   return 0;
}
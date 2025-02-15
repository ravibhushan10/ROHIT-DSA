//  Print these type of pattern for any number
//      *
//      *  *
//      *  *  *
//      *  *  *  *
//      *  *  *  *  *
#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    for(int row=1;row<=n;row=row+1)
    {
        for(int j=row;j>0;j--)
        {
            std ::cout<<"*"<<" ";
        }
        std ::cout<<std ::endl;
    }
   return 0;
}
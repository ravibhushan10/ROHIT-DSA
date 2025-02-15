// Print this type of pattern for any number
//    * * * * *
//    * * * * *
//    * * * * *
//    * * * * *
//    * * * * *

#include<iostream>
int main()
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    for(int row=1;row<=n;row=row+1)
    {
        for(int col=1;col<=5;col=col+1)
        {
            std ::cout<<"*"<<" ";
        }
        std ::cout<<std ::endl;
    }
    return 0;
}
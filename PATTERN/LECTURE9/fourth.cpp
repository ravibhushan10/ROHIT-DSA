// Print these type of pattern for any value
//        * * * * * * * * * * 
//        * * * *     * * * * 
//        * * *         * * *
//        * *             * *
//        *                 *
//        *                 *
//        * *             * *
//        * * *         * * *
//        * * * *     * * * *
//        * * * * * * * * * *

#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i)+1;j++)
        {
            std ::cout<<"*"<<" ";
        }

        for(int k=1;k<=(2*i)-2;k++)
        {
            std ::cout<<"  ";
        }
        for(int l=1;l<=(n-i)+1;l++)
        {
            std ::cout<<"*"<<" ";
        }
        std ::cout<<std ::endl;
    }
    

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i)+1;j++)
        {
            std ::cout<<"*"<<" ";
        }

        for(int k=1;k<=(2*i)-2;k++)
        {
            std ::cout<<"  ";
        }
        for(int l=1;l<=(n-i)+1;l++)
        {
            std ::cout<<"*"<<" ";
        }
        std ::cout<<std ::endl;
    }
    
   return 0;
}
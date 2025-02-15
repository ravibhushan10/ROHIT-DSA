// Print these type of pattern for any number
//       1 2 3 4 5 
//       1 2 3 4 5
//       1 2 3 4 5
//       1 2 3 4 5
//       1 2 3 4 5
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
            std ::cout<<j<<" ";
        }
        std ::cout<<std ::endl;
    }
   return 0;
}
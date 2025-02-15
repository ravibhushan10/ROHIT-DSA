#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    int sum=0;
    for(int i=0;i<=n;i++)
    {
        // // for natural number sum
        // sum=sum+i;
        
        // // for natural number square sum
        // sum=sum+(i*i);


        // for natural number cube sum
        sum=sum+(i*i*i);

        
    }
    std ::cout<<sum ;
   


   return 0;
}
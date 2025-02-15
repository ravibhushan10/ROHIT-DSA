#include<iostream>

int main(void)
{
    int n;
    std ::cout<<"Enter the number:";
    std ::cin>>n;
    if(n%2==0)
    {
        std ::cout<<n<<": is even";

    }
    else
        std ::cout<<n<<": is odd";

   return 0;
}
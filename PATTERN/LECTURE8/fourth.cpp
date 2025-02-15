// Print these type of pattern for any value
//               A
//             A B
//           A B C
//         A B C D
//       A B C D E
#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";

    while (true)
    {
    std ::cin>>n;
    if(n<=26)
    {
        break;
    }
    else{
        std ::cout<<"please enter the number(1 to 26)";
    }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i; j++)
        {
            std ::cout<<"  ";
        }
        char let='A'+(i-1);
        for(char name='A';name<=let;name=name+1)
        {
            std ::cout<<name<<" ";
        }
        std ::cout<<std ::endl;
    }

   return 0;
}
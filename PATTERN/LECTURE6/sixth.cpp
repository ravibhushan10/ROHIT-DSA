//  Print these type of pattern for any number
//       a b c d e
//       a b c d e
//       a b c d e
//       a b c d e
//       a b c d e
#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:"<<std ::endl;
    while(true)
    {
    std ::cin>>n;
       if(n>0 && n<=26)
       {
        break;
       }
       else 
       {
         std ::cout<<"please enter the value between (1 to 26:)"<<std ::endl;
       }
    }

    
    for(int row=1;row<=n; row++)
    {
       for(int col=1;col<=5;col=col+1)
       {
       char name= 'a'+(col-1);
         std ::cout<<name<<" ";
       }
       std ::cout<<std ::endl;
       
    }
   return 0;
}
// //  Second method


// int main()
// {
//     int n;
//     cout<<"enter the number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i=i+1)
//     {
//         for(char name='a';name<='e';name=name+1)
//         {
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }
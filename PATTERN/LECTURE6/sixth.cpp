//  Print these type of pattern for any number
//       a b c d e
//       a b c d e
//       a b c d e
//       a b c d e
//       a b c d e
#include<iostream>
using namespace std;
// First method
int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        for(int j=1;j<=n;j=j+1)
        {
    char name='a'+(j-1);
          cout<<name<<" ";
        }
        cout<<endl;
    }
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
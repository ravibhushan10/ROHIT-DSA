// Print these type of pattern for any value
//               A
//             A B
//           A B C
//         A B C D
//       A B C D E
#include<iostream>
using namespace std;



int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
{
    for(int j=1;j<=n-i;j=j+1)
    {
        cout<<"  ";
    }

    for(char k='A';k<='A'+i-1;k=k+1)
    {
        cout<<k<<" ";
       
    }
    // char name='A';
    // for(int k=1;k<=i;k=k+1)
    // {
    //     cout<<name<<" ";
    //     name=name+1;
    // }
    cout<<endl;
}
return 0;
}
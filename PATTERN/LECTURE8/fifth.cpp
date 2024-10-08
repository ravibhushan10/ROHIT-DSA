// Print these type of pattern for any value
//             1
//           2 1
//         3 2 1
//       4 3 2 1
//     5 4 3 2 1
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
    for(int k=i;k>=1;k=k-1)
    {
        cout<<k<<" ";
    }
    cout<<endl;
}
return 0;
}

// Print these type of pattern for any number
//       1
//       2 2
//       3 3 3
//       4 4 4 4
//       5 5 5 5 5
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        for(int j=1;j<=i;j=j+1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}
// Print these type of pattern for any value
//       1 2 3 4 5 
//       1 2 3 4 
//       1 2 3
//       1 2
//       1
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        for(int j=1;j<=(n-i)+1;j=j+1)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
// Print these type of pattern for any value
//       * * * * *
//       * * * *
//       * * *
//       * *
//       *
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=n;i>=1;i=i-1)
    {
        for(int j=1;j<=i;j=j+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
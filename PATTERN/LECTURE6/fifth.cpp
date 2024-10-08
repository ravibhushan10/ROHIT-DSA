// Print these type of pattern for any number
//      a a a a a 
//      b b b b b
//      c c c c c
//      d d d d d
//      e e e e e
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
    char name='a'+(i-1);
        for(int j=1;j<=n;j=j+1)
        {
          cout<<name<<" ";
        }
        cout<<endl;
    }
}




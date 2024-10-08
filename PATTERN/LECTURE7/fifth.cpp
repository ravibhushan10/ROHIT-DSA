//  Print these type of pattern for any number
//      a
//      b b
//      c c c
//      d d d d
//      e e e e e
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n<=26)
    {
    for(int i=1;i<=n;i=i+1)
    {
        char name='a'+(i-1);
        for(int j=i;j>=1;j=j-1)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    }
    else {
        cout<<"please enter the number between 1 to 26";
    }
}




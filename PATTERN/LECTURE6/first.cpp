// Print this type of pattern for any number
//    * * * * *
//    * * * * *
//    * * * * *
//    * * * * *
//    * * * * *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int j=1;j<=n;j=j+1)
    {
    for(int i=1;i<=n;i=i+1)
    {
        cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}

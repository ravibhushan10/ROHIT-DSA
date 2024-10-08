// Print these type of pattern for any value
//                *
//              * *
//            * * *
//          * * * *
//        * * * * *
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
    for(int k=1;k<=i;k=k+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
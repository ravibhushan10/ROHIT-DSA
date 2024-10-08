// Print these type of pattern for any value
//      * * * * * * * * * 
//        * * * * * * * 
//          * * * * * 
//            * * * 
//              * 
#include<iostream>
using namespace std;



// first method
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
{
    for(int j=1;j<=i-1;j=j+1)
    {
        cout<<"  ";
    }
    for(int k=1;k<=(n*2)-(2*i-1);k=k+1)
    {
        cout<<"* ";
    }
    
    cout<<endl;
}
return 0;
}

// second method


// int main()
// {
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     for(int i=n;i>=1;i=i-1)
// {
//     for(int j=1;j<=n-i;j=j+1)
//     {
//         cout<<"  ";
//     }
//     for(int k=1;k<=2*i-1;k=k+1)
//     {
//         cout<<"* ";
//     }
    
//     cout<<endl;
// }
// return 0;
// }

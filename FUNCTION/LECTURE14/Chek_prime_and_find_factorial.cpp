// Find the number is prime or not and alos find its factorial 

#include<iostream>
using namespace std;
// bool prime(int n)
// {
//     if(n<2)
//     {
//         return 0;
//     }
//     for(int i=2;i<n;i=i+1)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
void prime(int n)
{
    if(n<2)
    {
        cout<<"Number is not prime:"<<endl;
        return ;
    }
    for(int i=2;i<n;i=i+1)
    {
        if(n%i==0)
        {
            
        cout<<"Number is not prime:"<<endl;
            return ;
        }
    }
        cout<<"Number is  prime:"<<endl;
    return ;
}
int factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i=i+1)
    {
        ans=ans*i;
    }
    return ans;
}
int main()
{
   int a;
   cout<<"enter the number:"<<a;
   cin>>a;
//    if function return 0 then number is not prime
//    if function return 1 then number is prime
   prime(a);
   cout<<"factorial is:"<<factorial(a); 
return 0;
}

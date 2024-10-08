// Trailing a zero=find total zero in last of the ans of factorial

// First method
#include <iostream>
#include <cmath>
using namespace std;



 int findfact(int n)
 {
    int ans =1;
    
    for(int i=1;i<=n;i=i+1)
    {
       ans=ans*i;
    }
    return ans;
 }
  int total_last_zero(int total)
  {
    int count=0;
     int n=total,rem;
     while(total%10==0)
     {
         count++;
         total=total/10;
     }
     return count;
  }
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
 
int total=findfact(n);
 cout<<"the factorial is:"<<total<<endl;
 cout<<"total traviling number is:"<<total_last_zero(total);
 return 0;
}


// // second method
// int main()
// {
//    int n;
//    cin>>n;
//    int ans=0;
//    while(n>=5){

//    int count=n/5;
//    n=n/5;
//     ans=ans+count;
//    }
//    cout<<"travilling number is:"<<ans;
   
// }
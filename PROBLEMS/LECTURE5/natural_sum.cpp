#include<iostream>
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;

    
   int sum=(n*(n+1))/2;
   std ::cout<<"Sum of first "<<n<<" natural number is:"<<sum<<std ::endl;

   int result= (n*(n+1)*(2*n+1))/6;
   std ::cout<<"Sum of first "<<n<<" square natural number is:"<<result<<std ::endl;

   
   int result1= (n*n*((n+1)*(n+1)))/4;
   std ::cout<<"Sum of first "<<n<<" cube natural number is:"<<result1<<std ::endl;
  


   return 0;
}
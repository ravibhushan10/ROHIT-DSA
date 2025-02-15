// // add all digit
// #include<iostream>
// int main(void)
// {
//     int n;
//     std ::cout<<"enter the number:";
//     std ::cin>>n;
//     int rem, ans=0;
//     while(n>0)
//     {
//        rem=n%10;
//        ans=ans+rem;
//        n=n/10;
//     }
//     std ::cout<<"The sum of all digit :"<<ans;
//    return 0;
// }

// add all digit until single digit
#include<iostream>
int add_single_digit(int n)
{
    int rem,ans;
    while(n>9)
    {
    ans=0;
    while(n>0)
    {
      rem=n%10;
      ans=ans+rem;
      n=n/10;
    }
    n=ans;

    }
    return ans;
}
int main(void)
{
    int n;
    std ::cout<<"enter the number:";
    std ::cin>>n;
    std ::cout<<"The  sum in single digit is:"<<add_single_digit(n);
   return 0;
}
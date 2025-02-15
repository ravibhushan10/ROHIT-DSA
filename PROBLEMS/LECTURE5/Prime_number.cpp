// check number is prime or not
 #include<iostream>
 int main(void)
 {
     int n;
    std :: cout<<"Enter the number:";
     std ::cin>>n;

     if(n<2)
     {
        std ::cout<<"Number is not prime:";
         return 0;
     }
     else{
        for(int i=2;i<n; i++)
        {
            if(n%i==0)
            {
                std ::cout<<"Number is not prime:";
                return 0;
            }
        }
        std ::cout<<"Number is prime";
     }
    return 0;
 }
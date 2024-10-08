// check number is prime or not
 #include<iostream>
 using namespace std;
 
 int main()
 {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n<2)
    {
        cout<<"number is not prime"<<endl;
        return 0;
    }
    else
    {
        for(int i=2;i<=n-1;i=i+1)
        {
            if(n%i==0)
            {
                cout<<"number is not prime"<<endl;
                return 0;
            }
        }
        cout<<"number is prime"<<endl;
        return 0;
    }
    
 }
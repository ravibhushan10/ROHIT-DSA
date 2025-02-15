// Binary to decimal conversion
#include <iostream>


int main(void)
{
    std :: cout << "Enter a binary number: ";
    int n;

    int temp = n, rem, ans = 0, mul = 1;

    while (true) {
        
      std ::  cin >> n;
        

        int temp = n;
        bool isBinary = true;
        
        
        while (temp > 0) {
            rem = temp % 10;
            if (rem != 0 && rem != 1) {
                isBinary = false;
                break;
            }
            temp /= 10;
        }
        
        if (isBinary) {
            break; 
        } else {
           std :: cout << "Invalid input! Please enter a binary number (only 0s and 1s)." <<std :: endl;
           std :: cout<<"enter the binary number:"<<std :: endl;
        }
    }

    while (n > 0)
    {
        rem = n % 10;
        ans = rem * mul + ans;
        mul *= 2;
        n /= 10;
    }

   std :: cout << "Decimal number is: " << ans;
    return 0;
}
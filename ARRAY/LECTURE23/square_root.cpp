#include <iostream>
int square_root(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  int start = 1, end = n, mid, ans=0;
  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (mid * mid == n)
    {
      return mid;
    }
    else if (mid * mid > n)
    {
      end = mid - 1;
    }
    else
    {  
      ans = mid;
      start = mid + 1;
    }
  }
  return ans;
}
int main(void)
{
  int n;
  std ::cout << "enter the number to find square root :";
  std ::cin >> n;

  std ::cout << "the square root of " << n << "is:" << square_root(n);
  return 0;
}
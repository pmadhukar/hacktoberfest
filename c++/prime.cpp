#include<bits/stdc++.h>
using namespace std;

int main()
{
  int num;
  cout << "Give me a number!";
  cin >> num;
  int sqr = sqrt(num) + 1;
  bool isPrime = true;
  for (int i = 2; i < sqr; i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  if (isPrime)
    cout << "Prime" << endl;
  else
    cout << "Not prime" << endl;
}

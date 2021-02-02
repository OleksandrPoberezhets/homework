#include <iostream>
#include <cmath>
using namespace std;

double f (double x)
{   double a = 0;
    double b=1;
    for (int i = 0; i < 5; i++)
    {
    a+=b;
    b*=x;
      
    }
    return a;
}

int main ()
{
  double x;
  cin >> x;
  cout << f (x);
  return 0;
}

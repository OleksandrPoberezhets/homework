#include <iostream>
#include <cmath>

using namespace std;

double f(double i, double n){
    if(i==n){
        return pow(3*n,0.5);
    }
    else{
        return pow(3*i+f(i+1,n),0.5);
    }
}
int main()
{
    double n;
    cout<<"Введіть натуральне число:";
    cin>>n;
    
    cout<<f(1,n)<<endl;

    return 0;
}



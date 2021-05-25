/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include<iomanip>



using namespace std;

double Pow(double n,double k){
    double res=n;
    for(int i=0;i<k;i++){
        res=res*n;
    }
    return n;
}

int main()
{
    long double k;
    long double n;
    
    double res;
    cout<<"Введіть число: ";
    cin>>n;
    cout<<"Введіть ступінь числа: ";
    cin>>k;
    long double numPow = Pow(n,k);
    
    //cout << setprecision(4);
    cout << fixed;
    cout << setprecision(4)<<numPow;
    //cout<<numPow;
    return 0;
}

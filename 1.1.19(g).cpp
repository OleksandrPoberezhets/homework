#include <iostream>
#include <cmath>

using namespace std;

double f(double a,double x){
    double e=2.71828;
    if (x<0){
        return a*(pow(e,x)-1);
    }else{
        return 0;
    }
}
double derF(double a,double x){
    double e=2.71828;
    if (x<0){
        return a*pow(e,x);
    }else{
        return 0;
    }
}

int main()
{
    double a,x;
    
    cout<<"a:";
    cin>>a;
    cout<<"x:";
    cin>>x;
    cout<<"f(a,x)="<<f(a,x)<<endl;
    cout<<"f'(a,x)="<<derF(a,x)<<endl;

    return 0;
}


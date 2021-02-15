#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout<<"Введіть натуральне число:";
    cin>>n;
    double p=1;
    for(int i=1;i<n+1;i++){
        p=p*(1+ (1/(pow(i,2))));
        //cout<<"i: "<<i<<endl;
        //cout<<"p: "<<p<<endl;
    }
    cout<<p<<endl;

    return 0;
}



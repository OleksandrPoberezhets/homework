#include <iostream>
#include <cmath>

using namespace std;

double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

int main()
{
    int n;
    cout<<"Введіть натуральне число:"<<endl;
    cin>>n;
    double sum= 3.0;
    double akm1 =1;
    double ak;
    
    if (n==1){
        sum=1;
    }
    else if(n==2){
        sum=3;
    }
    else if(n>2)
    {
        for(int i=3;i<=n;i++)
        {
            ak=akm1+(akm1/pow(2.0,i));
            sum+=fact(i)/ak;
            akm1=ak;
        }
    }

    cout<<"Сума: "<<sum<<endl;
    
    return 0;
}

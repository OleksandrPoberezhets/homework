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
    double Akm1=1;
    double Bkm1=1;
    
    double sum=2.0/3.0;
    if (n==1){
        sum=2.0/3.0;
    }
    else if(n>1)
    {
        for(int i=2;i<=n;i++)
        {
            double ak = 3.0*Bkm1+2.0*Akm1;
            double bk = Bkm1+2.0*Akm1;
            
            sum+=pow(2.0,i)/((1.0+ak+bk)*fact(i));
            
            //cout<<ak<<endl;
            //cout<<bk<<endl;
            //cout<<Akm1<<endl;
            //cout<<Bkm1<<endl;
            
            Bkm1=ak;
            Akm1=bk;
        }
    }

    cout<<"Сума: "<<sum<<endl;
    
    return 0;
}



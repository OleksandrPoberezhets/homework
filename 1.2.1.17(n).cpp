#include <iostream>
#include <cmath>

using namespace std;

long double efact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * efact(N - 2);
}
long double ofact(int N)
{
    if(N < -1)
        return 0;
    if (N == -1)
        return 1;
    else
        return N * ofact(N - 2);
}

int main()
{
    double sum = 0;
    int i=0;
    
    double x;
    cout<<"Введіть x (|x|<1) : ";
    cin>>x;
    
    double e = 1/(1+x);
    double d;
    
    e = 0.001;
    
    while(true){
        d = pow(-1.0,i)*pow(x,i)*ofact(i*2-1)/efact(i*2);
        cout<<d<<endl;
        if (abs(d)<e){
            break;
        }
        sum+=d;
        i++;
        
    }
    cout<<"Сума: "<<sum<<endl;

    return 0;
}


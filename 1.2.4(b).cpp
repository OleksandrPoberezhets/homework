
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double sum=0;
    int n;
    double x;
    cout<<"Введіть натуральне число:"<<endl;
    cin>>n;
    cout<<"Введіть x:"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        sum+=1/pow((x*x+1),i);
    }
    cout<<"Значення виразу: "<<sum<<endl;
    

    return 0;
}


#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>

using namespace std;



int main()
{
    string num1="";
    string num2="";
    string x;
    string nums[20];
    cout<<"Введіть 20 цифр:"<<endl;
    cout<<"--------------------"<<endl;
    cin>>x;
    for(int i=0;i<20;i++){
        
        if (i<10){
            num1+=x[i];
        }else{
            num2+=x[i];
        }
        
        
    }

    cout<<num1<<endl;
    cout<<num2<<endl;
    unsigned long long num12 = atoi(num1.c_str());
    unsigned long long num22 = atoi(num2.c_str());
    unsigned long long sum =num12+num22;
    cout<<sum<<endl;

    

    return 0;
}


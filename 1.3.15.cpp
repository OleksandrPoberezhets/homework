
#include <iostream>
#include <cmath>
using namespace std;

void function(int a) {
    int counter=0;
    long long int n = 0;
    int k,m = 0;
    int lastK = 0;
    while(a) {
        k = a % 2;
        
        a = a / 2;
        n += k * pow(10, m);
        m++;
        
        if(k==1 and lastK==1){
            counter++;
            k=0;
            lastK=0;
        }
        else{
            lastK=k;
        }
        
        
    }
    cout <<"Число в двійковій системі числення: "<< n << endl;
    
    cout <<"Кількість чисел 11 :"<< counter << endl;

}

int main()
{
    int a;
    cin >> a;
    function(a);
    return 0;
}


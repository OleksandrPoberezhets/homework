
#include <iostream>
using namespace std;

int main()
{
    double a1,a2,b1,b2,c1,c2;
    double x,y;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    if(a1!=0 and -a2*b1+a1*b2!=0){
        y=(a2*c1-a1*c2)/(-a2*b1+a1*b2);
        x=(-b1*y-c1)/a1;
        cout<<"Один розвязок:"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
    }
    else{
        cout<<"Жодного розвязку"<<endl;
    }

    return 0;
}



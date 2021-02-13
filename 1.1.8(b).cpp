
#include <iostream>
using namespace std;

int main()
{  
    bool answ1,answ2=false;
    double x1,y1,x2,y2;
    double a2,b2,c2;
    cin>>a2>>b2>>c2;
    if(a2-b2!=0 and b2!=0){
        x1=(b2-c2)/(a2-b2);
        y1=(-a2*x1-c2)/b2;
        if (x1+y1<=0){
            answ1=true;
        }
    }
    if(b2-a2!=0 and b2!=0){
        x2=(b2+c2)/(b2-a2);
        y2=(-a2*x2-c2)/b2;
        if (x1+y1>=0){
            answ2=true;
        }
    }
    if(answ1==true and answ2 == false){
        cout<<"Один розв'язок:"<<endl;
        cout<<"x="<<x1<<endl;
        cout<<"y="<<y1<<endl;
    }
    if(answ2==true and answ1 == false){
        cout<<"Один розв'язок:"<<endl;
        cout<<"x="<<x2<<endl;
        cout<<"y="<<y2<<endl;
    }
    if(answ1==true and answ2 == true){
        cout<<"Два розв'язки:"<<endl;
        cout<<"1)x1="<<x1<<endl;
        cout<<"  y1="<<y1<<endl;
        cout<<" "<<endl;
        cout<<"2)x2="<<x2<<endl;
        cout<<"  y2="<<y2<<endl;
    }
    if(answ1==false and answ2 == false){
        cout<<"Жодного розв'язку"<<endl;
    }
    

    return 0;
}


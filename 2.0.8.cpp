/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>



using namespace std;

int main()
{
    int nums[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int mul=1;
    int counter =0;
    double H=0;
    double ndH = 0;
    for(int i=0;i<20;i++){
        int x; 
        cin>>x;
        if(x==0){
            break;
        }
        
        nums[i]=x;
    }

    for(int i=0;i<20;i++){
        if(nums[i]!=0){
            mul=mul*nums[i];
            counter++;
        }
    }
    for(int i=0;i<20;i++){
        if(nums[i]!=0){
            ndH+=1.0/nums[i];
        }
    }
    H=counter/ndH;
    cout<<"Добуток: "<<mul<<endl;
    cout<<"Кількість: "<<counter<<endl;
    cout<<"Середнє гармонійне: "<<H<<endl;
    

    return 0;
}


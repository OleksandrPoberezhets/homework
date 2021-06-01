
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double x1,x2,x3;

    cout<<"Перше число:"<<endl;
    cin>>x1;
    cout<<"Друге число:"<<endl;
    cin>>x2;
    cout<<"Третє число:"<<endl;
    cin>>x3;
    double nums[3]={x1,x2,x3};
    double max=x1;
    double min=x2;
    for(int i =0;i<3;i++){
        if(abs(nums[i])>abs(max)){
            max = nums[i];
        }
        if(abs(nums[i])<abs(min)){
            min = nums[i];
        }
    }

    cout<<"a)Найбільше за модулем число:"<<endl;
    cout<<max<<endl;
    cout<<"b)Найменше за модулем число:"<<endl;
    cout<<min<<endl;



    return 0;
}

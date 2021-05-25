#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
 
#define FILENAME_1 "nums.txt"
 
int main()
{
    bool f = true;
    
    double maxNum;
    ifstream file_1;
 
    file_1.open(FILENAME_1);
 
    double temp;
    
    while(file_1>>temp){
        if(f==true){
            f=false;
            maxNum=temp;
        }
        if(temp>maxNum){
            maxNum=temp;
        }
            
    }
    file_1.close();
    
    cout << maxNum;
    
    return 0;
}

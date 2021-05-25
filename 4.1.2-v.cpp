#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
 
#define FILENAME_1 "F.txt"
#define FILENAME_2 "G.txt"
 
int main()
{
    ifstream file_1;
    ofstream file_2;
 
    file_1.open(FILENAME_1);
    file_2.open(FILENAME_2);
 
    char temp;
    
    
    while((temp = file_1.get()) != -1){
        int itemp = temp-'0';
        if(pow(itemp,0.5)==(int)pow(itemp,0.5)){
            file_2.put(temp);
            file_2.put(' ');
        }
            
    }
    file_1.close();
    file_2.close();
 
    return 0;
}

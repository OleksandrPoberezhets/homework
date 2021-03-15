/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{   bool f=true;
    int firstKnum;
    int lastKnum;
    int counter=0;
    string st="dokjvm, fgko, ,";
    for(int i=0;i<st.length();i++){
        if(st[i]==','){
            if(f==true){
                firstKnum=i;
                f=false;
            }
            lastKnum = i;
            counter++;
        }
    }
    cout<<firstKnum<<endl;
    cout<<lastKnum<<endl;
    cout<<counter<<endl;
    return 0;
}

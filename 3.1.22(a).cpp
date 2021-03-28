/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstH="";
    string secondH="";
    string st="101101";
    for(int i=0;i<st.length();i++){
        if(i<(st.length())/2){
            firstH += st[i];
        }
        if(i>=(st.length())/2 and i<(st.length())){
            secondH += st[i];
        }
    }
    if(firstH==secondH){
        cout<<"Рядок складається з двох симетричних підрядків"<<endl;
    }
    else{
        cout<<"Рядок не складається з двох симетричних підрядків"<<endl;
    }
    

    return 0;
}


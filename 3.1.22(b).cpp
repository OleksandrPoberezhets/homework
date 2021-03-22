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
    int c=0;
    
    bool s=true;
    int n;
    cout<<"Введіть n: ";
    cin>>n;
    
    string st="101101101101";
    
    string part="";
    string parts[n];
    
    for(int i=0;i<n;i++){
        for(int k=0;k<st.length();k++){
            if(k<st.length()/(n*(i+1)) and k>=(st.length())/n*i){
                part += st[k];
        parts[i]=part;
        //cout<<"debug"<<endl;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<i<<endl;
        cout<<parts[i]<<endl;
        cout<<"debug"<<endl;
        c++;
        if(parts[0]!=parts[i]){
            s=false;
        }
    }
    
    }
    if(s==true){
        cout<<"Рядок складається з "<<n<<" симетричних підрядків"<<endl;
    }
    else{
        cout<<"Рядок не складається з "<<n<<" симетричних підрядків"<<endl;
    }
    cout<<c;

    return 0;
}

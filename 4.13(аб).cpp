/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;
void checkA(string A[]){
    int N=3;
    int count=0;
    int mostPopcount=0;
    string mostPop="";
 
    for (int i=0; i<N-1; i++){
        for (int j=0; j<N-i-1; j++){
            if (A[j] > A[j+1]){
                swap(A[j], A[j+1]);
            }
        } 
    }
    for (int i=0; i<N-1; i++){
        if(A[i]==A[i+1]){
            count++;
        } 
        else{
            if(count+1>mostPopcount){
                mostPop = A[i];
                mostPopcount = count+1;
            }
        }
    }
    cout <<"a)Найпопулярніша професія: "<< mostPop<<endl;
}
void checkB(string A[]){
    int N=3;
    int count=0;
 
    for (int i=0; i<N-1; i++){
        for (int j=0; j<N-i-1; j++){
            if (A[j] > A[j+1]){
                swap(A[j], A[j+1]);
            }
        } 
    }
    for (int i=0; i<N-1; i++){
        if(A[i]==A[i+1]){
            count++;
        } 
        else{
            if (count+1>=2){
                cout << A[i] << " -> " << count+1 << "\n"; count=0;
            }
        }
        
        if (i==N-2){
            if (count+1>=2){
                cout << A[i+1] << " -> " << count+1 << "\n";
            }
        } 
    }
}

struct NS
{
    string name;
    string surname;
};
struct Date
{
    string day;
    string mounth;
    string year;
};
struct Form
{
    NS ns;
    string gender;
    Date birthdate;
    string job;
};



int main()
{   
    int N = 3;
    Form P[N] = {{{"Іван", "Кузнецов"},"чоловік",{"21","07","2001"},"врач"},
        {{"Іван", "Рак"},"чоловік",{"14","11","1950"},"санітар"},
        {{"Ніна","Самойленко"},"жінка",{"18","09","2000"},"врач"}} ;
    
    
    string jobs[N];
    for(int i=0;i<N;i++){
        jobs[i]=P[i].job;
    }
    for(int i=0;i<N;i++){
        cout<<jobs[i]<<endl;
    }
    
    checkA(jobs);
    
    string names[N];
    for(int i=0;i<N;i++){
        names[i]=P[i].ns.name;
        
    }
    for(int i=0;i<N;i++){
        cout<<names[i]<<endl;
    }
    cout <<"б)Люди з однаковими іменами: "<<endl;
    checkB(names);
    
    
    return 0;
}

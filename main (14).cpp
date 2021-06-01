#include <iostream>
#include <fstream>
#include <string>
#include <deque>

using namespace std;


int main()
{
    ifstream file;

	file.open("txt.txt");
    int s;
    deque<int> myDeque(0); 
    
    cout<<"Було:"<<endl;
    if (file.is_open())
    {
        while(file>>s){
            cout<<s<<" ";
            myDeque.push_back(s);
        }
    }
    cout<<endl;
    if(myDeque.size()%2==0){
        myDeque.erase(myDeque.begin()+myDeque.size()/2-1, myDeque.begin()+myDeque.size()/2+1);
    }
    else{
        myDeque.erase(myDeque.begin()+myDeque.size()/2);
    }
    
    
    
    cout<<"Стало:"<<endl;
    for(int i = 0;i<myDeque.size();i++){
        cout<<myDeque[i]<<" ";
    }
    
    file.close();

    return 0;
}


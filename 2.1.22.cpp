#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    int k;
    cout<<"Введіть кількість рядків:     ";
    cin>>m;
    cout<<"Введіть кількість стовпців:   ";
    cin>>k;
    int matrix[m][k];
    int new_matrix[m][k];
    cout<<"Введіть значення масиву: ";
    for(int i=0;i<m;i++){
        
        for(int j=0;j<k;j++){
            cin>>matrix[i][j];
        }
    }
    
    cout<<"Введіть n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int i=0;i<m;i++){
            new_matrix[i][0]=matrix[i][k-1];
            for(int j=0;j+1<k;j++){
                new_matrix[i][j+1]=matrix[i][j];
            }
            
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                matrix[i][j]=new_matrix[i][j];
            }
            
        }
    }
        
    
    for(int i=0;i<m;i++){
        
        for(int j=0;j<k;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}


#include <iostream>
using namespace std;

int main() 
{ 
    int M ;
    int N ; 
    int i, j;
    int k;
    
    int** matrix;
    int** new_matrix;
    
    
    cout << "Введіть M: ";
    cin >> M;
    cout << "Введіть N: ";
    cin >> N;
    cout<< endl;
    
    matrix = new int*[M]; 
    new_matrix = new int*[M]; 
    
    for (i = 0; i < M; i++){
        matrix[i] = new int[N];
        new_matrix[i] = new int[N-1];
    }

    for (i = 0; i < M; i++)
    { 
        for (j = 0; j < N; j++) 
        { 
            cout << "Введіть елемент " << "[" << i << "][" << j << "]  "; 
            cin >> matrix[i][j]; 
        }
    }


    cout << endl;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++) 
        { 
            cout<< matrix[i][j]; 
            cout<< " " ;
            
        } 
        cout<< endl;
    }
    
    
    cout << "Введіть k: ";
    cin>>k;
    
    //Створюємо нову матрицю яка не містить k-го стовпчика
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++) 
        { 
            if (k>j){
                new_matrix[i][j] = matrix[i][j]; 
            }
            if(k<j){
                new_matrix[i][j-1] = matrix[i][j];
            }
        } 
        
        cout<< endl;
    }
    
    //Записуємо нову матрицю в matrix
    delete[] matrix;
    matrix = new int*[M]; 
    for (i = 0; i < M; i++){
        matrix[i] = new int[N-1];
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++) 
        { 
           matrix[i][j] = new_matrix[i][j];
        } 
    }
    
    //Виводимо змінену матрицю
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N-1; j++) 
        { 
            cout<< matrix[i][j]; 
            cout<< " " ;
            
        } 
        cout<< endl;
    }
}

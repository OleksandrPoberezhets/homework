#include <iostream>

using namespace std; 

struct Coordinates
{
    int x;
    int y;
};
struct Circle
{
    int radius;
    Coordinates center;
};
 
Circle inputInformation()
{   
    int radius;
    int x;
    int y;
    cout << "Введіть радіус : " << endl;
    cin >> radius;
    cout << "Введіть x : " << endl;
    cin >> x;
    cout << "Введіть y : " << endl;
    cin >> y;
    return {radius,{x,y}};
}
void printInformation(Circle cir)
{
    cout << "радіус : " << cir.radius << endl;
    cout << "координати : " <<"("<< cir.center.x<<","<< cir.center.y <<")"<< endl;
}
 
int main()
{
    Circle cir1;
    cir1=inputInformation();
    
    printInformation(cir1);
 
 
    return 0;
}


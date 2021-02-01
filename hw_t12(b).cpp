# include <iostream>
# include <ostream>
# include <cmath>
# include <sstream>
# include <string>
using
namespace std;

double func(double x)
{
    double y = pow(x, 0.5);
    y = int(y * 100 + 0.5) / 100.0;
    return y;
}

int main()
{
    ostringstream ost;
    double nums[5]={1,2,3,4,5};
    double fnums[5] = {0,0,0,0,0};
    for (int i = 0; i < 5; i++) {
    fnums[i]=func(nums[i]);
    }
    cout << "x   | " << nums[0] << "  | " << nums[1] << "  | " << nums[2] << "  | " << nums[3] << "  | " << nums[4] << "  | " << endl;
    cout << "--- +----+----+----+----+----+" << endl;
    cout << "F(x)|";
    for (int i = 0; i < 5; i++) {
        if ((int)fnums[i] != fnums[i])
        {
            cout<<fnums[i]<<"|";
        }
        if ((int)fnums[i] == fnums[i])
        {
            cout << " "<<fnums[i]<<"  "<<"|";
        }
        if (i==4){
            cout <<endl;
        }
    }
    return 0;
}

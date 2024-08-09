#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){

double x1 ,y1 ,x2, y2;
cin >> x1 >>y1>> x2>> y2;

double temp1,temp2, final;
temp1 = pow( (x2-x1),2);
temp2 = pow( (y2-y1),2);

final= sqrt(temp1+temp2);

cout << fixed <<setprecision(4)<< final <<endl;
    return 0;
}
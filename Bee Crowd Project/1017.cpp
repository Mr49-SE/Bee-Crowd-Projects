#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int time,speed,distance;
double fuel;
cin >> time >> speed;

distance = speed*time;
fuel = distance/12.0;
cout <<fixed <<setprecision(3)<< fuel <<endl;

    return 0;
}
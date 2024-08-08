#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int code1,num1,code2,num2;
double cost1,cost2,total;
cin >> code1 >> num1 >> cost1 ;
cin>> code2 >> num2>> cost2;
total=cost1*num1 + cost2*num2;
cout<<fixed <<setprecision(2) << "VALOR A PAGAR: R$ "<<total<<endl;
    return 0;
    
}
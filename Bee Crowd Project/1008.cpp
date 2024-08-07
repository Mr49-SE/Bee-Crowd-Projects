#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int num,time;
double pay,result;
cin >>num >> time >> pay;
result = time*pay;
cout << "NUMBER = "<< num<<endl;
cout <<fixed << setprecision(2)<< "SALARY = U$ "<<result<<endl;

    return 0;
}
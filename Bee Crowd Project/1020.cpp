#include <iostream>
using namespace std;

int main(){
int days, temp;
cin >>days;
cout << days/365 << " ano(s)" <<endl;
temp=days%365;
cout << temp/30 << " mes(es)" <<endl;
temp=temp%30;
cout << temp << " dia(s)" <<endl;
    return 0;
}
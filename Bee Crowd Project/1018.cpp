#include <iostream>
using namespace std;

int main(){
int temp ,num;
cin >> num;
cout <<num<<endl;
cout <<num/100 <<" nota(s) de R$ 100,00" <<endl;
temp=num%100;
cout <<temp/50 <<" nota(s) de R$ 50,00"<<endl;
temp=temp%50;
cout << temp/20<<" nota(s) de R$ 20,00"<<endl;
temp=temp%20;
cout << temp/10<<" nota(s) de R$ 10,00"<<endl;
temp=temp%10;
cout << temp/5<<" nota(s) de R$ 5,00"<<endl;
temp=temp%5;
cout << temp/2<<" nota(s) de R$ 2,00"<<endl;
temp=temp%2;
cout << temp/1<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
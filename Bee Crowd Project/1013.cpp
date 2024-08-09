#include <iostream>
using namespace std;

int main (){
int a,b,c,num1,num2,ans;
cin >> a >> b>>c ;
num1= (a+b+abs(a-b)) / 2;
num2= (b+c+abs(b-c)) / 2;
ans= (num1+num2 +abs(num1-num2))/2;
cout << ans << " eh o maior"<<endl;


    return 0;
}
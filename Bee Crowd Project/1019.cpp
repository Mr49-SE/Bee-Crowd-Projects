#include <iostream>
using namespace std;

int main(){
    int N,temp;
cin >> N;
cout << N/3600 << ":" ;
temp=N%3600;
cout << temp/60 << ":";
temp=temp%60;
cout << temp <<endl;

    return 0;
}
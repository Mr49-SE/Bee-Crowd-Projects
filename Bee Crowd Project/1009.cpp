#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string name ;
  double salary , sold , bonus , total;
  cin >> name >> salary >> sold;
  bonus=sold*0.15;
  cout << fixed <<setprecision(2)<< "TOTAL = R$ " << bonus+salary <<endl;
    return 0;
}
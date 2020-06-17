#include <iostream>
using namespace std;

int mcd(int x , int y){
  int t;
  x = (x < 0) ? -x:x;
  y = (y < 0) ? -y:y;
  t = (x < y) ? x : y;
  while ( (x % t) || (y % t))
    --t;
  return t;
}
int euc(int x,int y){
  return (!y) ? x : euc(y,x%y);
}
int main()
{
  int x,y;
  cout << "ingrese el primer numero: "<<endl;
  cin >> x;
  cout << "ingrese el segundo numero: "<<endl;
  cin >> y;  
  cout << "MCD: " << mcd(x,y) << endl;
  cout << "MCD (euclides): " << euc(x,y) << endl;
}
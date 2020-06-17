#include <iostream>
 using namespace::std;

 bool Bisiesto( int );

 int main() {                
 int anio;
 cout <<"\nIntroduzca un anio y sabrá si es bisiesto:\n";
 cin >> anio;

 if ( Bisiesto( anio ) )
 cout << anio << " es un anio bisiesto." << endl;
 else 
 cout << anio << " no es un anio bisiesto." << endl;
 
 return 0;
 }  
 
 bool Bisiesto( int a  )
 {     

 if ( 0 != a%4 )
 return false;
 else if ( 0 != a % 100 )
 return true;
 else if ( 0 != a % 400 )
 return false;
 else 
 return true;
 }     
#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

int main(){
    int anio, mes, dia;
    cout<< "Ingrese el anio: "<<endl;
    cin>> anio;
    cout<<"Ingrese el mes: "<<endl;
    cin>> mes;
    cout<<"Ingrese el dia: "<<endl;
    cin>> dia;
    if (  anio>= 0 && mes >= 0 && mes <= 12 && dia >= 0 && dia <= 31 )
    {
        dia++;
        if ( dia == 32 )
        {
            dia = 1;
            mes++;
            if ( mes == 13 )
            {
                mes = 1;
                anio++;
            }
        }
                if(anio%4==0 and anio%100!=0 or anio%400==0)
                cout << " Su ano es Bisiesto" << endl;
                else
                cout << "No es bisiesto" << endl;
        cout<<"La nueva fecha es: "<< anio<<" "<< mes<< " "<<dia<< " "<<endl;
        return 0;
}else
cout<<"Fecha no valida"<<endl;
}
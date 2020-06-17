#include <conio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int hora, minuto, segundos;
    cout<< "Ingrese la hora: "<<endl;
    cin>> hora;
    cout<<"Ingres los minutos: "<<endl;
    cin>> minuto;
    cout<<"Ingres los segundos: "<<endl;
    cin>> segundos;
    if ( hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundos >= 0 && segundos <= 59 )
    {
        segundos++;
        if ( segundos == 60 )
        {
            segundos = 0;
            minuto++;
            if ( minuto == 60 )
            {
                minuto = 0;
                hora++;
                if ( hora == 24 )
                    hora = 0;
            }
          
        }
        cout<<" La hora segundos: "<< hora<<"h "<< minuto<< "m "<<segundos<< "s "<<endl;
        return 0;
}
}




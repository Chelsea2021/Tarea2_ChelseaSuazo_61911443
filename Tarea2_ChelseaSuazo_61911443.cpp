/*Cree una aplicacion de prediccion de resultados de partidos de futbol, donde se debe ingresar por parte
del usuario una cantidad de partidos pendientes por jugar y el programa simulara los goles anotados de
los equipos en cada encuentro.

Segun la cantidad de goles anotados debe determinar si el equipo gano,
empato o perdio asignando 3 puntos en caso de gane, 1 punto en caso de empate y cero puntos en caso de que pierda.Los puntos obtenidos en cada encuentro se deben acumular para mostrar al final de haberse disputados todos los partidos, cuantos fueron los puntos alcanzados.

Puede simular el equipo que usted desee seleccionar en el sistema y puede indicar la cantidad de partidos restantes y puntos acumulados a la fecha.Adicional puede decidir si el equipo es campeon o solamente imprimir los resultados y puntos obtenidos al final del torneo.
*/

#include <cstdlib>
#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */
#include <string>
#include "conio.h"

using namespace std;


int main()
{
    int rondas;
    int i = 1;
    int x = 1;
    int datos1,datos2, acum1=0, acum2=0, ganador=0;
    int numAciertos = 0;
    int numPerdidas = 0;
    int puntos1=0;
    int puntos2=0;

    /*srand(time(NULL));  es igual a srand(time(0))*/
    string equipo1,equipo2;
    do
    {
        cout << "Ingrese la cantidad de partidos pendientes por jugar\n";
        cin >> rondas;
        srand(time(0));
        for (i ; i <= rondas; i++)
        {
            cout << "Ingrese el nombre de su equipo?\n";
            cin >> equipo1;
            cout << "Los goles anotados por " << equipo1 << " son:\n";
            for (i; i<=rondas; i++)
            {
                datos1 = 0 + rand() % (12);
                printf("%d\n", datos1);
                acum1= acum1 + datos1;
            }
            cout << "Ingrese el nombre de el oponente?\n";
            cin >> equipo2;
            cout << "Los goles anotados por " << equipo2 << " son:\n";
            for (x; x <= rondas; x++)
            {
                datos2 = 0 + rand() % (12);
                printf("%d\n", datos2);
                acum2 = acum2 + datos2;
            }
            if (acum1 > acum2)
            {
                numAciertos++;
                cout << "\nPor haber anotado el mayor numero de goles se le asignara 3 puntos oro a " << equipo1 << endl<<endl;
                puntos1 = rondas * 3;
                cout << equipo1 << " CAMPEON" << endl<<endl;
            }
            else
            {
                numPerdidas++;
                cout << "\nNO se le asignara los 3 puntos oro a " << equipo1 << " por no alcanzar la  cantidad de goles esperada" << endl
                << endl;
            }
            if (acum2 > acum1)
            {
                numAciertos++;
                cout << "\nPor haber anotado el mayor numero de goles se le asignara 3 puntos oro a " << equipo2 << endl
                    << endl;
                puntos2 = rondas * 3;
                cout << equipo2 << " CAMPEON" << endl<<endl;
            }
            else
            {
                numPerdidas++;
                cout << "\nNO se le asignara los 3 puntos oro a " << equipo2 << " por no alcanzar la  cantidad de goles esperada" << endl<<endl;
            }
            if (acum1 == acum2)
            {
                cout << "\nPero han alcanzado la misma cantidad de goles, por lo tanto ambos equipos obtendran 1 punto oro " << endl<<endl;
                puntos1 = rondas * 1;
                puntos2 = rondas * 1;
            }
            
        } 
    } while (i && x <= rondas);
    cout << "LOS GOLES ANOTADOS POR PARTE DEL " << equipo1 << " SON " << acum1 <<" Y LOS PUNTOS OBTENIDOS SON "<<puntos1<< endl;
    cout << "LOS GOLES ANOTADOS POR PARTE DEL " << equipo2 << " SON " << acum2 <<" Y LOS PUNTOS OBTENIDOS SON "<< puntos2<< endl;
    return 0;
}


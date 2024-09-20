#include <iostream>
using namespace std;

//Funciones
void ingresoNotas(float &nota, const string& mensaje) {
    while (true) {
        cout << mensaje;
        cin >> nota;
        if (nota >= 1 && nota <= 10){
            break;
        }else{
            cout <<"Nota invalida.Rango de 1 a 10.Vuelva a intentar...\n";
        }
    }

}

int main() {
    //Declaracion de variables e impresion
    float deb, trab, pru, exa, promedio;
    ingresoNotas(deb,"Ingrese la nota de deberes: ");
    ingresoNotas(trab,"Ingrese la nota de trabajo: ");
    ingresoNotas(pru,"Ingrese la nota de prueba: ");
    ingresoNotas(exa,"Ingrese la nota de examen: ");

    //Calculo del promedio
    promedio = (deb + trab + pru + exa) / 4;

    //Resultado general
    if (promedio >= 7) {
        cout << "Aprobado" << endl;
    } else if (promedio >= 5 && promedio < 7) {
        cout << "Suspendido" << endl;
    } else if (promedio >= 1  && promedio < 5) {
        cout << "Reprobado" << endl;
    }

    return 0;
}

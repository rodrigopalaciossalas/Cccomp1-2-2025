#include <iostream>
using namespace std;
/*
Cajero automático simplificado
Tiene un saldo inicial.
El usuario puede depositar, retirar o ver saldo hasta que salga.
Valida que no se pueda retirar más de lo que hay.
*/
// Instrucciones:
int main()
{
 cout << "Bienvenido al cajero automático simplificado." << endl;
    double saldo = 1000.0; // Saldo inicial
    int opcion;
    do {
        while (true) {
            cout << "Seleccione una opción:" << endl;
            cout << "1. Depositar" << endl;
            cout << "2. Retirar" << endl;
            cout << "3. Ver saldo" << endl;
            cout << "4. Salir" << endl;
            cin >> opcion;

            if (opcion >= 1 && opcion <= 4) {
                if(opcion == 1) 
                {
                    double deposito;
                    cout << "Ingrese la cantidad a depositar: ";
                    cin >> deposito;
                    if (deposito > 0) 
                    {
                        saldo += deposito;
                        cout << "Depósito exitoso. Nuevo saldo: " << saldo << endl;
                    } 
                else 
                    {
                        cout << "Cantidad inválida." << endl;
                    }
                } 
                else if (opcion == 2) 
                {
                    double retiro;
                    cout << "Ingrese la cantidad a retirar: ";
                    cin >> retiro;
                    if (retiro > 0 && retiro <= saldo) 
                    {
                        saldo -= retiro;
                        cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
                    } 
                    else 
                    {
                        cout << "Cantidad inválida o insuficiente." << endl;
                    }
                } 
                else if (opcion == 3) 
                {
                    cout << "Saldo actual: " << saldo << endl;
                }
                else if (opcion == 4) 
                {
                    cout << "Saliendo del cajero automático." << endl;
                }
                break; 
            } 
            else 
            {
                cout << "Opción no válida. Intente de nuevo." << endl;
            }
        }
    } while (opcion != 4); // Repetir hasta que el usuario elija salir
    return 0;
}

// Este programa es un cajero automático simplificado que permite al usuario depositar, retirar y ver su saldo.
#include <iostream>
using namespace std;


/*
1. Contar los dígitos de un número
Objetivo: Contar la cantidad de dígitos de un número ingresado por el usuario.
*/
// Instrucciones:
int main() 
{   
    int n;
    std::cout << "ingrese su numero" << std::endl;
    std::cin >> n;

    if (n < 0) {
        n = -n;
    }

    int contador = 0;
    int numero = n; 

    do {
        n /= 10;  
        contador++;    
    } while (n != 0);  

        std::cout << "El número " << numero << " tiene " << contador << " dígitos." << std::endl;

        return 0;
}

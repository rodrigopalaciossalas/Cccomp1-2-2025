#include <iostream>
using namespace std;
/*
Pide un número N y dibuja una pirámide de asteriscos de N niveles usando bucles anidados (for).
*/
// Instrucciones:
int main() 
{
    int n;
    cout << "Ingrese el número de niveles de la pirámide: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;


}
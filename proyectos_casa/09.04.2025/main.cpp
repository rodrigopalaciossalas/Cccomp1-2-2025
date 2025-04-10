#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "Ingrese un numero entero: ";
    cin >> number;

    while (number != 1){
        int i = 2;
        while (i <= number){
            if (number % i == 0){
                cout << i << " ";
                number /= i;
                i = 2;
            } else {
                i++;
            }
        }
    }

    return 0;
}
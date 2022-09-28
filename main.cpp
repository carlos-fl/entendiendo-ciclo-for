/*
hacer un programa que lea una secuencia de numeros , por
cada numero entero ingresado el programa imprimira la 
secuencia 1,4,9 ...... k**2, donde k es el numero ingresado
la secuencia termina cuando se ingresa un numero primo.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, counter = 0;

  do {
    cout << "escribe el numero " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++) {
      if(n % i == 0) {
        counter++;
      } 
    } if(counter > 2) {
        counter = 0;
      }
  } while(counter != 2);

  for(int j = 1; j <= n; j++) {
    cout << pow(j,2) << endl;
  }
//  cout << 6 % 1 << endl;
  return 0;
}
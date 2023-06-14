#include <iostream>
using namespace std;

int main() {
  int numero;
  int contador = 1;
  cout << "Digite um número positivo: ";
  cin >> numero;

  while (contador <= numero) {
    if (contador % 2 == 0) {
      cout << contador << endl;
    }
    contador++;
  }
  return 0;
}

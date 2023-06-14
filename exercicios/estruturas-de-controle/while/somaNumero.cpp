#include <iostream>
using namespace std;

int main() {
  int entrada;
  int contador = 1;
  int soma;
  cout << "Digite um número: ";
  cin >> entrada;

  while (contador <= entrada) {
    soma += contador; // soma = soma + contador
    contador++;
  }
  cout << soma << endl;
  return 0;
}

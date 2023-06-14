#include <iostream>
using namespace std;

int main() {
  int numero;
  cout << "Digite um número inteiro: ";
  cin >> numero;
  if (numero == 10 || numero == 20) {
    cout << "Número válido" << endl;
  } else {
    cout << "Número inválido" << endl;
  }
  return 0;
}

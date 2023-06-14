#include <iostream>
using namespace std;

int main() {
  int numero, numero2;
  cout << "Digite um número inteiro: ";
  cin >> numero;
  cout << "Digite outro número inteiro: ";
  cin >> numero2;

  cout << endl;
  if (numero % 2 == 0 && numero2 % 2 == 0) {
    cout << "os dois números são pares" << endl;
  } else if (numero % 2 != 0 && numero2 % 2 == 0) {
    cout << "o segundo número é par: " << numero2 << endl << "Mas o primeiro número não é par: " << numero << endl;
  } else if (numero2 % 2 != 0 && numero % 2 == 0) {
    cout << "o primeiro número é par: " << numero << endl << "Mas o segundo número não é par: " << numero2 << endl;
  } else {
    cout << "nenhum dos dois é pares" << endl;
  }
  return 0;
}

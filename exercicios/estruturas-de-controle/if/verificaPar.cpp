#include <iostream>
using namespace std;

int main() {
  int numero;
  cout << "Digite um número: ";
  cin >> numero;
  if (numero % 2 == 0) {
    cout << "O número é par: " << numero << endl;
  } else {
    cout << "O número é ímpar: " << numero << endl;
  }
  return 0;
}

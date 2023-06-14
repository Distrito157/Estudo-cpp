#include <iostream>
using namespace std;

int main() {
  int numero;
  cout << "Digite um número: ";
  cin >> numero;
  if (numero == 0) {
    cout << "O número é neutro: " << numero << endl;
  } else if (numero > 0) {
    cout << "O número é positivo: " << numero << endl;
  } else {
    cout << "O número é negativo: " << numero << endl;
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int entrada;
  int soma = 0;
  do {
    cout << "Digite -1 para sair" << endl;
    cout << "Digite um número: ";
    cin >> entrada;
    if (entrada >= 0) {
      soma += entrada;
    }

  } while (entrada >= 0);
  cout << "A soma dos números é: " << soma << endl;
  return 0;
}

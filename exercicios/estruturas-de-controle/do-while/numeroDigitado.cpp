#include <iostream>
using namespace std;

int main() {
  int entrada;
  // o do while irá ser executado mesmo que seja falso, se for verdadeiro irá parar.
  do {
    cout << "Digite zero(0) para sair" << endl;
    cout << "Digite um número para ser digitado: ";
    cin >> entrada;
    cout << endl;
    cout << "Número digitado foi " << entrada << endl;

  } while (entrada != 0);
  cout << "Saindo do programa" << endl;
  return 0;
}

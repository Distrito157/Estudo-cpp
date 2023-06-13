#include <iostream>
using namespace std;

int main() {
  int numero;
  cout << "Digite um número: ";
  cin >> numero;

  cout << endl;

  int verifica = numero % 2 == 0;
  cout << "Lembrando que (true é 1 e false é 0)\nVerificando se o número é positivo.\nO resultado é: " << verifica << endl;
  return 0;
}

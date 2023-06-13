#include <iostream>
using namespace std;

int main() {
  int numero, numero2;
  cout << "Digite um número ";
  cin >> numero;
  cout << "Digite o segundo número ";
  cin >> numero2;

  cout << endl;

  int verifica = numero == numero2;
  cout << "Lembrando que (true é 1 e false é 0)\nVerificando se o primeiro número é igual ao segundo número.\nO resultado é: " << verifica << endl;
  return 0;
}

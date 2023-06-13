#include <iostream>
using namespace std;

int main() {
  int idade;
  int idade2;
  cout << "Digite uma idade: ";
  cin >> idade;
  cout << "Digite outra idade: ";
  cin >> idade2;

  cout << endl;

  int compara = idade > idade2;
  cout << "Lembrando que (true é 1 e false é 0)\nVerificando se o primeiro número é maior que o segundo número.\nO resultado é: " << compara << endl;
  return 0;
}

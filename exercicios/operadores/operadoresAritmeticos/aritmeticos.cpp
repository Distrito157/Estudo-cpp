#include <iostream>
using namespace std;

int main() {
  int numero1, numero2;
  cout << "Digite um número: ";
  cin >> numero1;
  cout << "Digite outro número: ";
  cin >> numero2;

  // soma
  int soma = numero1 + numero2;
  // subtração
  int subtrair = numero1 - numero2;

  // multiplica
  int multiplica = numero1 * numero2;

  // divisão
  int divisao = numero1 / numero2;


  // módulo = resto da divisão
  int resto = numero1 % numero2;

  cout << endl;

  cout << "A soma dos números é: " << soma << endl;
  cout << "A subtração dos números é: " << subtrair << endl;
  cout << "A multiplicação dos números é: " << multiplica << endl;
  cout << "A divisão dos números é: " << divisao << endl;
  cout << "O resto da divisão dos números é: " << resto << endl;
  return 0;
}

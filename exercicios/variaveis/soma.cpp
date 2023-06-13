#include <iostream>
using namespace std;

int main() {
  int n1;
  int n2;

  cout << "Digite o primeiro número: ";
  cin >> n1;
  cout << "Digite o segundo número: ";
  cin >> n2;

  // adição
  cout << "A soma dos dois números é: " << n1 + n2 << endl;
  // subtração
  cout << "A subtração dos dois números é: " << n1 - n2 << endl;
  // multiplicação
  cout << "A multiplicação dos dois números é: " << n1 * n2 << endl;
  // divisão
  if (n2 == 0) {
    cout << "Não da para dividir por zero" << endl;
  } else {
    // static_cast<double>(n1) para transformar o operando pro tipo ponto flutuante
    cout << "A divisão dos dois números é: " << static_cast<double>(n1) / n2 << endl;
  }
}

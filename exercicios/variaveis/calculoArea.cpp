#include <iostream>
using namespace std;

int main() {
  double largura, altura;
  cout << "Digite a largura: ";
  cin >> largura;
  cout << "Digite a altura: ";
  cin >> altura;

  // base * altura
  double calculo = largura * altura;
  cout << "A Área do retângulo é: " << calculo << endl;
  return 0;
}

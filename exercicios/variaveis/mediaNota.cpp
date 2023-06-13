#include <iostream>
using namespace std;

int main() {
  double nota1, nota2, nota3;
  cout << "Digite a primeira nota: ";
  cin >> nota1;
  cout << "Digite a segunda nota: ";
  cin >> nota2;
  cout << "Digite a terceira nota: ";
  cin >> nota3;

  cout << endl;

  if (nota1 > 10 or nota2 > 10 or nota3 > 10 or nota1 < 0 or nota2 < 0 or nota3 < 0) {
    cout << "Não pode haver nota(s) maiores que 10" << endl;
    cout << "Também Não pode haver nota(s) negativas" << endl;
  } else {
    double media = (nota1 + nota2 + nota3) / 3;
    cout << "A média das notas é: " << media << endl;
  }

  return 0;
}

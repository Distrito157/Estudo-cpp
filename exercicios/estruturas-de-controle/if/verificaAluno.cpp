#include <iostream>
using namespace std;

int main() {
  int nota;
  cout << "Digite uma nota: ";
  cin >> nota;
  if (nota >= 7 && nota <= 10) {
    cout << "Você foi aprovado: " << nota << endl;
  } else if (nota > 10){
    cout << "Nota digitada maior que 10, o limite é (10)" << endl;
  } else if (nota < 0) {
    cout << "Nota digitada menor que 0, o limite é (0)" << endl;
  } else {
    cout << "Você foi reprovado: " << nota << endl;
  }
  return 0;
}

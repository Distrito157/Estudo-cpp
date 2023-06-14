#include <iostream>
using namespace std;

int main() {
  int opcao;
  cout << "Digite um número de 1 a 7: ";
  cin >> opcao;

  switch (opcao) {
    case 1:
      cout << "Hoje é segunda-feira" << endl;
      break;
    case 2:
      cout << "Hoje é terça-feira" << endl;
      break;
    case 3:
      cout << "Hoje é quarta-feira" << endl;
      break;
    case 4:
      cout << "Hoje é quinta-feira" << endl;
      break;
    case 5:
      cout << "Hoje é sexta-feira" << endl;
      break;
    case 6:
      cout << "Hoje é sabádo" << endl;
      break;
    case 7:
      cout << "Hoje é domingo" << endl;
      break;
    default:
      cout << "Opção inválida" << endl;
  }
  return 0;
}

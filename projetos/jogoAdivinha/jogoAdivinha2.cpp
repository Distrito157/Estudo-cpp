#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
  srand(time(nullptr));
  int numeroSecreto = rand() % 100; // 0 a 99
  
  int tentativa;
  int tentativaRestantes = 5;
  int score = 0;


  while (true) {
    cout << "Digite um número de 0 a 99" << endl;
    cout << ">>> ";
    cin >> tentativa;


    if (tentativa == numeroSecreto) {
      cout << "Você acertou, o valor era: " << numeroSecreto << endl;
      tentativaRestantes--;
    } else if (tentativa < 0 || tentativa > 99) {
      cout << 
      "O número secreto está entre 0 e 99, sua entrada foi inválida\nTente novamente."
      << endl;
      cout << endl;
    } else if (tentativa > numeroSecreto) {
      cout << "O número secreto está baixo, tente novamente" << endl;
      tentativaRestantes--;
      cout << endl;
    } else {
      cout << "O número secreto está alto, Tente novamente" << endl;
      cout << endl;
      tentativaRestantes--;
    }

    if (tentativaRestantes == 0) {
      cout << "Você perdeu, acabaram suas tentativas\nO número secreto era: " << numeroSecreto << endl;
      break;
    }

  }

  return 0;
}

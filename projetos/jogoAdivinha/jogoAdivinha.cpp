#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
  srand(time(nullptr)); // inicializa a semente do gerador de números

  int numeroSecreto = rand() % 100; // gera um número aleatório de 0 a 99
  int tentativa;
  int tentativaRestantes = 5;

  cout << "Bem vindo ao jogo de adivinhação" << endl;
  cout << "Digite um número de 0 a 99" << endl;

  do {
    cout << ">>> ";
    cin >> tentativa;

    if (tentativa == numeroSecreto) {
      cout << "Parabéns, você acertou, o número era: " << numeroSecreto << endl;
    } else if (tentativa > numeroSecreto) {
      cout << "Número secreto está baixo, tente novamente" << endl;
    } else {
      cout << "Número secreto está alto, tente novamente" << endl;
    }
    tentativaRestantes--;

  } while (tentativaRestantes > 0);

  if (tentativaRestantes == 0) {
    cout << "Suas tentativas acabaram, número secreto era: " << numeroSecreto << endl;
  }

  cout << "Obrigado por jogar" << endl;

}

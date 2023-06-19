#include <iostream>

using namespace std;

int main() {
  int tamanhoArray = 5;
  int numeros[tamanhoArray];

  int numeroDigitado;

  cout << "Digite 5 números" << endl;
  for (int i = 0; i < tamanhoArray; i++) {
    cout << ">>> ";
    cin >> numeros[i];
  }

  cout << "Digite um número para verificar se ele está presente na array"
       << endl;
  cout << ">>> ";
  cin >> numeroDigitado;

  bool numeroExiste = false;
  for (int i = 0; i < tamanhoArray; i++) {
    if (numeroDigitado == numeros[i]) {
      cout << "O número existe, é o: " << numeros[i] << endl;
      numeroExiste = true;
      break;
    }
  }

  if (! numeroExiste) {
    cout << "Número não encontrado" << endl;
  }

  return 0;
}

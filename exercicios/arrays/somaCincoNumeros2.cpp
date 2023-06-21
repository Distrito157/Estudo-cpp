#include <iostream>

using namespace std;

int main()
{
  int tamanhoArray = 5;
  int cincoNumeros[tamanhoArray];
  int maisCincoNumeros[tamanhoArray];

  cout << "Digite 5 números" << endl;
  for (int i = 0; i < tamanhoArray; i++) {
    cout << ">>> ";
    cin >> cincoNumeros[i];
  }

  cout << "Digite 5 mais cinco números" << endl;
  for (int i = 0; i < tamanhoArray; i++) {
    cout << ">>> ";
    cin >> maisCincoNumeros[i];
  }

  cout << "O calculo dos 10 números digitados somados entre si é: " << endl;
  for (int i = 0; i < tamanhoArray; i++) {
    cout << cincoNumeros[i] << "+" << maisCincoNumeros[i] << ": " << cincoNumeros[i] + maisCincoNumeros[i] << endl;
  }
  return 0;
}

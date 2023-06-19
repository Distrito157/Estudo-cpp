#include <iostream>

using namespace std;

int main()
{
  int soma = 0;
  int numeros[5];

  for (int i = 0; i < 5; i++)
  {
    cout << "Digite um número: ";
    cin >> numeros[i];
    soma += numeros[i];
  }

  cout << endl << "A soma é: " << soma << endl;


  return 0;
}

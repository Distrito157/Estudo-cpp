#include <iostream>
using namespace std;

int main() {
  int ano;
  int anoAtual = 2023;
  cout << "Digite o ano de nascimento: ";
  cin >> ano;
  int idade = anoAtual - ano;
  cout << "Sua idade atual é: " << idade << endl;
}

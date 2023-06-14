
#include <iostream>
using namespace std;

int main() {
  int idade;
  cout << "Digite uma idade: ";
  cin >> idade;

  cout << endl;
  if (idade >= 13 && idade <= 19) {
    cout << "Você é adolescente, a idade digitada é: " << idade << endl;
  } else if (idade > 19) {
    cout << "Você é um adulto, a idade digitada é: " << idade << endl;
  } else if (idade >= 0 and idade < 13) {
    cout << "Você é um pré-adolescente ou criança, a idade digitada é: " << idade << endl;
  } else {
    cout << "Você não é adolescente, nem adulto, nem criança e pré-adolescente\nVocê não nasceu ainda, a idade digitada é: " << idade << endl;
  } 
  return 0;
}

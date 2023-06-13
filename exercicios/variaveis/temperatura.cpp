#include <iostream>
using namespace std;

int main() {
  double celsius;
  cout << "Digite a temperatura Celsius: ";
  cin >> celsius;
  double fahrenheit = (celsius * 9 / 5) + 32;
  cout << "Convertida para Fahrenheit: " << fahrenheit << endl;
}

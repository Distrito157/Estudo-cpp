#include <iostream>


int main()
{
  const int array_size = 3;
  int i, j, matriz[array_size][array_size] =
  {{1, 2, 3},
   {4, 20, 25},
   {7, 10, 9}};

  int max_num = matriz[0][0]; 

  for (i = 0; i < array_size; i++) {
    for (j = 0; j < array_size; j++) {
      if (matriz[i][j] > max_num) {
        max_num = matriz[i][j];
      }
    }
  }
  std::cout << "O valor máximo é: " << max_num << '\n';

  return 0;
}

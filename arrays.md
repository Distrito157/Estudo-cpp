# Índice
+ [Arrays](#arrays)
+ [Arrays bidimensionais/matriz](#matriz)
+ [Manipulação de Arrays](#manipulaarray)
+ [Biblioteca vector](#vector)

# <a name="arrays"></a>Arrays no C++
Um array em C++ é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo em uma sequência contigua de memória. Os arrays têm um tamanho fixo, determinado durante a sua declaração, e cada elemento do array pode ser acessado através de um indice.

Aqui está um exemplo simples de declaração e uso de um array de inteiros em C++:
```c++
#include <iostream>

int main() {
  // Declaração de um array de inteiros com tamanho 5
  int numeros[5];

  // Atribuição de valores aos elementos do array
  numeros[0] = 10;
  numeros[1] = 20;
  numeros[2] = 30;
  numeros[3] = 40;
  numeros[4] = 50;

  // Acessando e exibindo os valores dos elementos do array
  std::cout << "Elemento 0: " << numeros[0] << std::endl;
  std::cout << "Elemento 1: " << numeros[1] << std::endl;
  std::cout << "Elemento 2: " << numeros[2] << std::endl;
  std::cout << "Elemento 3: " << numeros[3] << std::endl;
  std::cout << "Elemento 4: " << numeros[4] << std::endl;

  return 0;
}
```
Nesse exemplo, declaramos um array de inteiros chamado "numeros" com tamanho 5. Os elementos do array são acessados usando a notação de colchetes e o indice desejado, começando a partir do 0. Em seguida, atribuímos valores a cada elemento do array.

Em seguida, exibimos os valores dos elementos do array usando a função `cout` para impressão no console.

Saída esperada:
```yaml
Elemento 0: 10
Elemento 1: 20
Elemento 2: 30
Elemento 3: 40
Elemento 4: 50
```
É importante observar que o indice de um array em C++ deve estar dentro dos limites do tamanho declarado. Se tentarmos acessar ou atribuir um valor fora dos limites do array, podemos obter um comportamento indefinido ou um erro de tempo de execução.

Além disso, podemos usar loops, como o `for`, para percorrer os elementos de um array:
```c++
int numeros[5] = {10, 20, 30, 40, 50};

// Usando um loop para exibir os elementos do array
for (int i = 0; i < 5; i++) {
  std::cout << "Elemento " << i << ": " << numeros[i] << std::endl;
}
```
Nesse exemplo, inicializamos o array `numeros` com os valores durante a declaração. Em seguida, usamos um loop `for` para iterar sobre os elementos do array e exibir seus valores.

Saída esperada:
```yaml
Elemento 0: 10
Elemento 1: 20
Elemento 2: 30
Elemento 3: 40
Elemento 4: 50
```
Esses exemplos ilustram o uso básico de arrays em C++. Eles são úteis para armazenar e manipular coleções de elementos do mesmo tipo de forma eficiente. Lembre-se de que os arrays têm tamanho fixo e os indices começam em 0. É importante garantir que os indices usados estejam dentro dos limites do array para evitar erros.

# <a name="matriz"></a>Array bidimensional
Um array bidimensional em C++ é uma estrutura de dados que armazena elementos em uma grade de duas dimensões. Ele é composto por linhas e colunas, formando uma matriz retangular. Cada elemento da matriz é acessado através de um par de indices, um para a linha e outro para a coluna.

Aqui está um exemplo simples de declaração e uso de uma matriz de inteiros em C++:
```c++
#include <iostream>

int main() {
  // Declaração de uma matriz de inteiros com 3 linhas e 4 colunas
  int matriz[3][4];

  // Atribuição de valores aos elementos da matriz
  matriz[0][0] = 1;
  matriz[0][1] = 2;
  matriz[0][2] = 3;
  matriz[0][3] = 4;
  matriz[1][0] = 5;
  matriz[1][1] = 6;
  matriz[1][2] = 7;
  matriz[1][3] = 8;
  matriz[2][0] = 9;
  matriz[2][1] = 10;
  matriz[2][2] = 11;
  matriz[2][3] = 12;

  // Acessando e exibindo os valores dos elementos da matriz
  std::cout << "Elemento [0][0]: " << matriz[0][0] << std::endl;
  std::cout << "Elemento [0][1]: " << matriz[0][1] << std::endl;
  std::cout << "Elemento [0][2]: " << matriz[0][2] << std::endl;
  std::cout << "Elemento [0][3]: " << matriz[0][3] << std::endl;
  std::cout << "Elemento [1][0]: " << matriz[1][0] << std::endl;
  std::cout << "Elemento [1][1]: " << matriz[1][1] << std::endl;
  std::cout << "Elemento [1][2]: " << matriz[1][2] << std::endl;
  std::cout << "Elemento [1][3]: " << matriz[1][3] << std::endl;
  std::cout << "Elemento [2][0]: " << matriz[2][0] << std::endl;
  std::cout << "Elemento [2][1]: " << matriz[2][1] << std::endl;
  std::cout << "Elemento [2][2]: " << matriz[2][2] << std::endl;
  std::cout << "Elemento [2][3]: " << matriz[2][3] << std::endl;

  return 0;
}
```
Neste exemplo, declaramos uma matriz de inteiros chamada "matriz" com 3 linhas e 4 colunas. Os elementos da matriz são acessados usando dois pares de colchetes e os índices desejados. Em seguida, atribuímos valores a cada elemento da matriz.

Em seguida, exibimos os valores dos elementos da matriz usando a função `cout` para impressão no console.

Saída esperada:
```yaml
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [0][3]: 4
Elemento [1][0]: 5
Elemento [1][1]: 6
Elemento [1][2]: 7
Elemento [1][3]: 8
Elemento [2][0]: 9
Elemento [2][1]: 10
Elemento [2][2]: 11
Elemento [2][3]: 12
```
Uma forma conveniente de inicializar uma matriz é usar uma lista de inicialização:
```c++
int matriz[3][4] = {
  {1, 2, 3, 4},
  {5, 6, 7, 8},
  {9, 10, 11, 12}
};
```
Nesse exemplo declaramos e inicializamos uma matriz de inteiros com os mesmos valores do exemplo anterior. As chaves `{}` internas representam as linhas da matriz, e os valores separados por vírgulas representam os elementos de cada linha.

Os arrays bidimensionais são úteis para armazenar e manipular dados estruturados em forma de grade, como matrizes, tabuleiros de jogos, dados tabulares, imagens e muito mais. Você pode realizar operações, como iteração e cálculos, usando loops aninhados para percorrer as linhas e colunas da matriz.
```c++
// Iteração sobre os elementos da matriz
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 4; j++) {
    std::cout << "Elemento [" << i << "][" << j << "]: " << matriz[i][j] << std::endl;
  }
}
```
Nesse exemplo, usamos dois loops `for` aninhados para percorrer todos os elementos da matriz. A cada iteração, exibimos o valor do elemento e seus índices.

Saída esperada:
```yaml
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [0][3]: 4
Elemento [1][0]: 5
Elemento [1][1]: 6
Elemento [1][2]: 7
Elemento [1][3]: 8
Elemento [2][0]: 9
Elemento [2][1]: 10
Elemento [2][2]: 11
Elemento [2][3]: 12
```
Esses exemplos ilustram o uso básico de arrays bidimensionais em C++. As matrizes podem ser declaradas com diferentes tamanhos e tipos de elementos, e você pode realizar várias operações com elas, como leitura, escrita, iteração e cálculos.

# <a name="manipulaarray"></a>Manipulação de Arrays
A manipulação de arrays é uma habilidade fundamental na programação, e pode ser aplicada em várias linguagens, incluindo C++. Nesta explicação detalhada, vamos abordar conceitos básicos e avançados relacionados à manipulação de arrays em C++, passando por tópicos como declaração, acesso, modificação de arrays em C++, passando por tópicos como declaração, acesso, modificação, iteração e funções relacionadas.

## Acesso aos Elementos:
Os elementos de um array podem ser acessados usando o operador de índice `[]`, que permite especificar a posição do elemento desejado. O índice começa em 0 para o primeiro elemento. Por exemplo:
```c++
int numeros[5] = {1, 2, 3, 4, 5};

int primeiroElemento = numeros[0]; // Acessa o primeiro elemento (valor 1)
int segundoElemento = numeros[1]; // Acessa o segundo elemento (valor 2)
```
## Modificação de elementos:
Os elementos de um array podem ser modificados atribuindo um novo valor a eles usando o operador de atribuição `=`. Por exemplo:
```c++
int numeros[3] = {10, 20, 30};

numeros[1] = 25; // Modifica o segundo elemento para 25
```
## Iteração sobre um Array:
Para percorrer todos os elementos de um array, é comum usar loops, como o `for` ou `while`. Você pode usar um contador para percorrer os índices do array e acessar os elementos correspondentes. Por exemplo:
```c++
int numeros[5] = {1, 2, 3, 4, 5};

for (int i = 0; i < 5; i++) {
    cout << numeros[i] << " "; // Imprime cada elemento do array
}
```
## Funções Relacionadas a Arrays:
A biblioteca padrão do C++ oferece funções e recursos para auxiliar na manipulação de arrays. Algumas funções úteis incluem:
+ `sizeof(array)`: Retorna o tamanho total em bytes do array.
+ `std::array`: Uma classe de contêiner em C++ que fornece métodos e funcionalidades adicionais para manipular arrays.
+ `std::vector`: Outra classe de contêiner em C++ que é mais flexivel que o array tradicional e oferece recursos avançados de manipulação.

## Arrays Multidimensionais:
Além dos arrays unidimensionais, é possível criar arrays multidimensionais, como matrizes. Um array bidimensional é basicamente um array de arrays. Por exemplo:
```c++
int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

## Ponteiros e arrays:
Em C++, os arrays podem ser tratados como ponteiros, pois o nome do array representa o endereço de memória do primeiro elemento. Isso significa que você pode usar ponteiros para manipular arrays de forma eficiente e flexivel


# <a name="vector"></a>Vectors

## Vetores Básicos
Em C++, um vetor é uma coleção de elementos do mesmo tipo armazenados em uma sequência contígua de memória. A biblioteca `<vector` do C++ fornece uma classe de vetor que simplifica a manipulação desses elementos. Aqui estão os conceitos básicos:

1. **Declaração e Inicialização**: Você pode declarar e inicializar um vetor da seguinte maneira:
```cpp
#include <vector>
using namespace std;

vector<int> meuVetor;                     // Vetor vazio
vector<int> meuVetor = {1, 2, 3, 4, 5};    // Vetor inicializado com elementos
vector<string> meuVetor(5, "Olá");         // Vetor de strings com 5 elementos "Olá"
```
2. **Acesso aos elementos:** Os elementos de um vetor são acessados usando índices baseados em zero.
```cpp
vector<int> meuVetor = {1, 2, 3, 4, 5};

int primeiroElemento = meuVetor[0];       // Acesso ao primeiro elemento (valor: 1)
int segundoElemento = meuVetor[1];        // Acesso ao segundo elemento (valor: 2)

meuVetor[2] = 10;                         // Modificando um elemento
```
3. **Tamanho do vetor:** Você pode obter o tamanho (número de elementos) de um vetor usando a função `size()`.
```cpp
vector<int> meuVetor = {1, 2, 3, 4, 5};
int tamanho = meuVetor.size();            // Tamanho do vetor (valor: 5)
```
4. **Iteração em um vetor:** Para percorrer um vetor, você pode usar um loop `for` ou um iterador.
```cpp
vector<int> meuVetor = {1, 2, 3, 4, 5};

// Usando um loop for
for (int i = 0; i < meuVetor.size(); i++) {
    cout << meuVetor[i] << " ";
}
cout << endl;

// Usando um iterador
for (auto it = meuVetor.begin(); it != meuVetor.end(); ++it) {
    cout << *it << " ";
}
cout << endl;
```

## Recursos Avançados
Além dos conceitos básicos, os vetores em C++ têm recursos avançados, como:

1. **Adicionar e remover elementos:** Você pode adicionar elementos ao final de um vetor usando a função `push_back()` e remover o último elemento usando `pop_back()`.
```cpp
vector<int> meuVetor = {1, 2, 3};

meuVetor.push_back(4);            // Adiciona o elemento 4 ao final do vetor
meuVetor.pop_back();              // Remove o último elemento do vetor
```
2. **Redimensionar um Vetor:** Você pode redimensionar um vetor usando a função `resize()`.
```cpp
vector<int> meuVetor = {1, 2, 3};

meuVetor.resize(5);               // Redimensiona o vetor para ter 5 elementos
meuVetor.resize(3);               // Redimensiona o vetor para ter 3 elementos
```
3. **Outras Funções Úteis:** A classe `vector` fornece muitas outras funções úteis, como `insert()`, `erase()`, `clear()`, `empty()`, `front()`, `back()`, etc. Essas funções permitem realizar várias operações de manipulação de vetores.
```cpp
vector<int> meuVetor = {1, 2, 3};

meuVetor.insert(meuVetor.begin() + 2, 10);    // Insere o valor 10 no índice 2
meuVetor.erase(meuVetor.begin() + 1);         // Remove o elemento no índice 1
meuVetor.clear();                             // Remove todos os elementos do vetor
bool vazio = meuVetor.empty();                 // Verifica se o vetor está vazio
int primeiro = meuVetor.front();               // Obtém o primeiro elemento do vetor
int ultimo = meuVetor.back();                  // Obtém o último elemento do vetor
```
4. **Passagem de vetores para funções**: Você pode passar vetores como argumentos para funções em C++. Existem algumas abordagens para fazer isso:
+ Passagens por referência: Para evitar a cópia desnecessária de vetores, você pode passá-los por referência, usando o operador `&`, isso permite que a função modifique o vetor original.
```cpp
void modifyVector(vector<int>& vec) {
    vec.push_back(100);  // Modifica o vetor original
}

int main() {
    vector<int> meuVetor = {1, 2, 3};
    modifyVector(meuVetor);
    // meuVetor agora contém {1, 2, 3, 100}
    return 0;
}
```
+ Passagem por valor: Se você não deseja que a função modifique o vetor original ou deseja trabalhar com uma cópia independente do vetor, pode passá-lo por valor. Nesse caso, a função receberá uma cópia do vetor.
```cpp
void modifyVector(vector<int> vec) {
    vec.push_back(100);  // Modifica apenas a cópia local do vetor
}

int main() {
    vector<int> meuVetor = {1, 2, 3};
    modifyVector(meuVetor);
    // meuVetor continua sendo {1, 2, 3}
    return 0;
}
```
2. Vetores multidimensionais: Além de vetores unidimensionais, C++ também suporta vetores multidimensionais, conhecidos como matrizes. Você pode declarar e acessar elementos de uma matriz da seguinte maneira:
```cpp
vector<vector<int>> matriz;                          // Declaração de uma matriz vazia
vector<vector<int>> matriz(n, vector<int>(m, valor)); // Declaração de uma matriz n x m inicializada com um valor

// Acesso aos elementos da matriz
int elemento = matriz[i][j];                          // Acessa o elemento na linha i e coluna j

// Exemplo de matriz 3x3
vector<vector<int>> matriz = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};
int valor = matriz[1][2];  // Valor do elemento na linha 1, coluna 2 (valor: 6)
```
3. Algoritmos e iterações avançadas: A biblioteca `<algorithm` em C++ fornece muitas funções poderosas para trabalhar com vetores. Alguns exemplo incluem:
+ `sort()`: Ordena os elementos de um vetor em ordem crescente.
```cpp
vector<int> meuVetor = {3, 1, 4, 1, 5, 9};
sort(meuVetor.begin(), meuVetor.end());  // Ordena os elementos em ordem crescente
// meuVetor agora contém {1, 1, 3, 4, 5, 9}
```
+ `reverse()`: Inverte a ordem dos elementos em um vetor.
```cpp
vector<int> meuVetor = {1, 2, 3, 4, 5};
reverse(meuVetor.begin(), meuVetor.end());  // Inverte a ordem dos elementos
// meuVetor agora contém {5, 4, 3, 2, 1}
```
+ `accumulate()`: Calcula a soma de todos os elementos em um vetor.
```cpp
vector<int> meuVetor = {1, 2, 3, 4, 5};
int soma = accumulate(meuVetor.begin(), meuVetor.end(), 0);  // Soma os elementos (valor: 15)
```

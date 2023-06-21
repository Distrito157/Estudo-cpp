# Índice
+ [Funções](#funcoes)
+ [Parâmetros argc e argv para a função main](#argcargv)
+ [Sobrecarga de funções](#sobrecargafuncao)
+ [Omissão de argumentos e argumentos padrão](#omissaoarg)

# <a name="funcoes"></a>Funções
Em C++, uma função é um bloco de código que é definido uma vez e pode ser chamado (ou invocado) várias vezes durante a execução do programa. As funções ajudam a organizar e reutilizar o código, permitindo que você divida tarefas em partes menores e mais gerenciáveis.

Vamos analisar a estrutura básica de uma função em C++:
```c++
tipo_retorno nome_da_funcao(parâmetros) {
    // Corpo da função (bloco de código)
    // Pode incluir declarações de variáveis, comandos, expressões, etc.
    // Pode conter instruções de controle, como if, for, while, etc.
    return valor_retorno; // Opcional, depende do tipo de retorno da função
}
```
Aqui está uma explicação detalhada de cada elemento:

+ **tipo_retorno**: é o tipo de dado que a função retorna. Pode ser qualquer tipo válido em C++, como int, float, double, char, bool ou até mesmo um tipo definido pelo usuário. Se a função não retornar nenhum valor, o tipo de retorno deve ser `void`.
+ **nome_da_funcao**: é o nome que você escolhe para identificar a função. É importante escolher nomes descritivos que indiquem claramente o propósito da função.
+ **parâmetros**: são os valores de entrada que a função recebe quando é chamada. Os parâmetros são opcionais e podem ser de qualquer tipo válido em C++. Você pode ter zero, um ou vários parâmetros separados por vírgulas. Cada parâmetro consiste em um tipo e um nome.
+ **corpo da função**: é o bloco de código que contém as instruções que serão executadas quando a função for chamada. Aqui você pode declarar variáveis locais, realizar cálculos, executar instruções de controle, etc.
+ **valor_retorno**: é o valor que a função retorna. Se a função tiver um tipo de retorno diferente de `void`, você deve usar a palavra-chave return seguida pelo valor que deseja retornar. O valor de retorno deve ser do tipo especificado pelo tipo de retorno da função.

Vejamos um exemplo de função simples que calcula a soma de dois números:
```c++
int somar(int a, int b) {
    int resultado = a + b;
    return resultado;
}
```
Neste exemplo, a função chamada somar recebe dois parâmetros `a` e `b`, ambos do tipo `int`. Ela realiza a operação de soma e armazena o resultado na variável `resultado`. Em seguida, retorna o valor resultante usando a instrução `return`.

Para chamar (ou invocar) a função, você pode usá-la em qualquer parte do seu programa. Veja o exemplo abaixo:
```c++
int main() {
    int x = 5;
    int y = 3;
    int soma = somar(x, y);
    cout << "A soma de " << x << " e " << y << " é: " << soma << endl;
    return 0;
}
```
Neste exemplo, a função `somar` é chamada passando os valores de `x` e `y` como argumentos. O valor retornado pela função é atribuído à variável `soma` e, em seguida, é exibido na tela.

Esse é apenas um exemplo básico para ilustrar o conceito de função em C++. Funções podem ser mais complexas, com vários parâmetros, tipos de retorno diferentes e realizar tarefas mais avançadas. À medida que você ganha mais experiência em programação, poderá explorar recursos mais avançados, como funções com argumentos padrão, funções sobrecarregadas, funções recursivas, entre outros.

# <a name="argcargv"></a>Parâmetros argc e argv da função main
Em C++, a função `main` é o ponto de entrada do programa. Ela pode receber dois parâmetros, `argc` e `argv`, que permitem passar informações da linha de comando para o programa.
## `argc` (Argument Count):
+ `argc` é um inteiro que representa o número de argumentos passados na linha de comando.
+ O valor mínimo de `argc` é 1, pois o nome do programa em si é sempre considerado como um argumento.
+ Por exemplo, se você executar o programa com o seguinte comando:
+ `./meu_programa arg1 arg2`, `argc` será igual a 3 (contando o nome do programa como o primeiro argumento).
## `argv` (Argument Vector):
+ `argv` é uma array de ponteiros para strings (ou seja, um vetor de strings).
+ Cada elemento do array `argv` contém um ponteiro para uma string que representa um argumento passado na linha de comando.
+ O primeiro elemento(`argv[0]`) sempre contém o nome do programa.
+ Os elementos seguintes(`argv[1]`, `argv[2]`, etc.) contém os argumentos adicionais passados na linha de comando.
+ O último elemento de `argv` é um ponteiro nulo (`nullptr`), indicando o fim do array.
+ Por exemplo, se você executar o programa com o comando `./meu_programa arg1 arg2`, `argv` será um array contendo: `{"./meu_programa", "arg1", "arg2", nullptr}`.
Aqui está um exemplo de uso dos parâmetros `argc` e `argv` na função `main`:
```c++
#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Número de argumentos: " << argc << std::endl;

  for (int i = 0; i < argc; i++) {
    std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
  }

  return 0;
}
```
Neste exemplo, o programa exibe o número de argumentos(`argc`) e, em seguida, exibe cada argumento(`argv[i]`) em uma linha separada.

Ao executar o programa com alguns argumentos na linha de comando, você verá a contagem e a lista dos argumentos passados.

Por exemplo, ao executar o programa com o comando `./meu_programa arg1 arg2`, você pode obter a seguinte saída:
```yaml
Número de argumentos: 3
Argumento 0: ./meu_programa
Argumento 1: arg1
Argumento 2: arg2
```
Neste caso `argc` é igual a 3, pois há três argumentos, e `argv` contém `"./meu_programa", "arg1", "arg2", nullptr`.

Os parâmetros `agrc` e `argv` são úteis quando você deseja que o seu programa seja capaz de receber inputs ou configurações específicas fornecidas pelo usuário através da linha de comando. Você pode processar esses argumentos dentro da função `main` ou passá-los para outras funções para realizar operações específicas.

É importante obsrvar que os argumentos da função `main` são passados como strings, se você deseja realizar operações numéricas com os argumentos, será necessário convertê-los para o tipo de dado apropriado.

Em resumo, `argc` e `argv` são os parâmetros da função `main` em C++ que permitem receber informações da linha de comando, `argc` é o número de argumentos passados e `agrv` é um array de ponteiros para strings contendo os argumentos. Você pode usar esses parâmetros para processar inputs do usuário ou configurar o comportamento do programa.

# <a name="sobrecargafuncao"></a>Sobrecarga de funções
A sobrecarga de funções (também conhecida como "overloading") permite que você defina múltiplas funções com o mesmo nome, mas com parâmetros diferentes. Isso significa que você pode ter várias funções com o mesmo nome, desde que tenham tipos de parâmetros diferentes.

A sobrecarga de funções é útil quando você deseja realizar operações semelhantes, mas com diferentes tipos de dados ou números de parâmetros. O compilador C++ será capaz de determinar qual função chamar com base nos argumentos fornecidos durante a chamada da função.

Aqui está um exemplo simples para ilustrar a sobrecarga de funções em C++:
```cpp
#include <iostream>

// Função que imprime um inteiro
void imprimirNumero(int num) {
  std::cout << "O número inteiro é: " << num << std::endl;
}

// Função que imprime um float
void imprimirNumero(float num) {
  std::cout << "O número float é: " << num << std::endl;
}

int main() {
  imprimirNumero(5);      // Chama a primeira função (imprimirNumero(int))
  imprimirNumero(3.14f);  // Chama a segunda função (imprimirNumero(float))
  
  return 0;
}
```
Nesse exemplo, temos duas funções chamadas `imprimirNumero`, uma que recebe um parâmetro inteiro (`int`) e outra que recebe um parâmetro float (`float`). Durante a execução, o programa chama as funções `imprimirNumero` com diferentes tipos de argumentos. O compilador C++ identifica a função correta a ser chamada com base nos tipos dos argumentos fornecidos.

A sobrecarga de funções também pode ser aplicada com diferentes números de parâmetros. Aqui está um exemplo:
```cpp
#include <iostream>

// Função que soma dois inteiros
int somar(int a, int b) {
  return a + b;
}

// Função que soma três inteiros
int somar(int a, int b, int c) {
  return a + b + c;
}

int main() {
  int resultado1 = somar(2, 3);         // Chama a primeira função (somar(int, int))
  int resultado2 = somar(1, 2, 3);      // Chama a segunda função (somar(int, int, int))
  
  std::cout << "Resultado 1: " << resultado1 << std::endl;
  std::cout << "Resultado 2: " << resultado2 << std::endl;
  
  return 0;
}
```
Nesse exemplo, temos duas funções chamadas `somar`, uma que recebe dois parâmetros inteiros (`int`) e outra que recebe três parâmetros inteiros. Durante a execução, o programa chama as funções `somar` com diferentes números de argumentos. O compilador C++ determina a função correta a ser chamada com base no número e nos tipos dos argumentos fornecidos.


A sobrecarga de funções em C++ é uma ferramenta poderosa que permite escrever código mais legível e flexível, permitindo que você reutilize nomes de função para diferentes propósitos, desde que os parâmetros sejam distintos o suficiente para o compilador diferenciá-los.

# <a name="omissaoarg"></a>Omissão de argumentos e argumentos padrão
A omissão de argumentos e os argumentos padrão são recursos relacionados que permitem definir valores padrão para os parâmetros de uma função. Essa técnica é útil quando você deseja fornecer valores padrão para alguns parâmetros, permitindo que sejam omitidos durante a chamada da função.

Aqui está um exemplo simples que demonstra como usar argumentos padrão:
```cpp
#include <iostream>

// Função que imprime uma mensagem com um nome
void saudacao(std::string nome = "amigo") {
  std::cout << "Olá, " << nome << "!" << std::endl;
}

int main() {
  saudacao();         // Chama a função sem argumentos, usa o valor padrão "amigo"
  saudacao("João");   // Chama a função com o argumento "João", substitui o valor padrão
  
  return 0;
}
```
Neste exemplo, a função `saudacao` possui um parâmetro `nome` com um valor padrão definido como "amigo". Durante a chamada da função, se nenhum argumento for fornecido, o valor padrão será usado. No entanto, se um argumento for fornecido, ele substituirá o valor padrão.

A omissão de argumentos também pode ser usada em conjunto com a sobrecarga de funções para fornecer diferentes conjuntos de argumentos padrão para diferentes versões da função. Veja o exemplo a seguir:
```cpp
#include <iostream>

// Função que imprime uma mensagem com um nome
void saudacao(std::string nome = "amigo") {
  std::cout << "Olá, " << nome << "!" << std::endl;
}

// Sobrecarga da função saudacao com um parâmetro adicional
void saudacao(std::string nome, std::string cumprimento) {
  std::cout << cumprimento << ", " << nome << "!" << std::endl;
}

int main() {
  saudacao();                           // Chama a primeira função, usa o valor padrão "amigo"
  saudacao("João");                     // Chama a primeira função, substitui o valor padrão
  saudacao("Maria", "Bom dia");         // Chama a segunda função, substitui os valores padrão
  
  return 0;
}
```
Neste exemplo, temos duas versões da função `saudacao`. A primeira versão possui um parâmetro `nome` com um valor padrão "amigo". A segunda versão sobrecarrega a função adicionando um parâmetro `cumprimento`. Durante a chamada da função, o compilador determinará qual versão usar com base nos argumentos fornecidos.


A omissão de argumentos e os argumentos padrão são recursos úteis em C++ para tornar as funções mais flexíveis e fornecer valores pré-definidos quando necessário, evitando a necessidade de fornecer valores para todos os parâmetros em todas as chamadas da função. Isso torna o código mais legível e permite uma maior reutilização de código.


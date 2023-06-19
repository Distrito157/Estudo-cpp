# Índice
+ [Funções](#funcoes)
+ [Parâmetros argc e argv para a função main](#argcargv)

# <a name="funcoes"></a>Funções
Em C++, uma função é um bloco de código que é definido uma vez e pode ser chamado (ou invocado) várias vezes durante a execução do programa. As funções ajudam a organizar e reutilizar o código, permitindo que você divida tarefas em partes menores e mais gerenciáveis.

Vamos analisar a estrutura básica de uma função em C++:
```C++
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
```C++
int somar(int a, int b) {
    int resultado = a + b;
    return resultado;
}
```
Neste exemplo, a função chamada somar recebe dois parâmetros `a` e `b`, ambos do tipo `int`. Ela realiza a operação de soma e armazena o resultado na variável `resultado`. Em seguida, retorna o valor resultante usando a instrução `return`.

Para chamar (ou invocar) a função, você pode usá-la em qualquer parte do seu programa. Veja o exemplo abaixo:
```C++
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
```C++
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
```YAML
Número de argumentos: 3
Argumento 0: ./meu_programa
Argumento 1: arg1
Argumento 2: arg2
```
Neste caso `argc` é igual a 3, pois há três argumentos, e `argv` contém `"./meu_programa", "arg1", "arg2", nullptr`.

Os parâmetros `agrc` e `argv` são úteis quando você deseja que o seu programa seja capaz de receber inputs ou configurações específicas fornecidas pelo usuário através da linha de comando. Você pode processar esses argumentos dentro da função `main` ou passá-los para outras funções para realizar operações específicas.

É importante obsrvar que os argumentos da função `main` são passados como strings, se você deseja realizar operações numéricas com os argumentos, será necessário convertê-los para o tipo de dado apropriado.

Em resumo, `argc` e `argv` são os parâmetros da função `main` em C++ que permitem receber informações da linha de comando, `argc` é o número de argumentos passados e `agrv` é um array de ponteiros para strings contendo os argumentos. Você pode usar esses parâmetros para processar inputs do usuário ou configurar o comportamento do programa.

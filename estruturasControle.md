+ [Introdução](#intro)
+ [Estruturas condicionais]
    + [if](#if)
    + [switch](#switch)
+ [Estruturas de repetição]
    + [while](#while)
    + [do while](#dowhile)
    + [for](#for)
    + [for-each](#foreach)
+ [Estruturas de controle de fluxo]
    + [break](#break)
    + [continue](#continue)


# <a name="intro"></a> Estruturas de Controle em C++
As estruturas de controle são usadas em programação para controlar o fluxo de execução do programa. Elas permitem tomar decisões e repetir ações com base em condições específicas. Em C++, temos três principais estruturas de controle: estruturas condicionais, estruturas de repetição e estruturas de controle de fluxo.

**Estruturas condicionais**

As estruturas condicionais permitem executar diferentes trechos de código com base em uma condição. Em C++, temos duas principais estruturas condicionais: `if` e `switch`.

# <a name="if"></a>`if`
A estrutura `if` verifica uma condição e executa um bloco de código se a condição for verdadeira. Ela permite que você tome decisões com base em certas condições.

Aqui está a sintaxe básica do `if`:
```c++
if (condicao) {
    // bloco de código a ser executado se a condição for verdadeira
}
```
+ A palavra-chave `if` indica o início da estrutura condicional.
+ Entre parênteses, você deve fornecer uma expressão ou condição que será avaliada como verdadeira ou falsa.
+ Após a condição, você abre um bloco de código entre chaves `{}`. Esse bloco de código será executado somente se a condição for verdadeira.

Você também pode usar a palavra-chave `else` para executar um bloco de código alternativo caso a condição do `if` seja falsa:
```c++
if (condicao) {
    // bloco de código a ser executado se a condição for verdadeira
} else {
    // bloco de código a ser executado se a condição for falsa
}
```

# <a name="switch"></a> `switch`

A estrutura `switch` é usada quando há múltiplas opções e você deseja executar diferentes ações com base em um valor específico. Ela oferece uma forma mais compacta de lidar com múltiplas condições.

Aqui está a sintaxe básica do `switch`:
```c++
switch (expressao) {
    case valor1:
        // bloco de código a ser executado se a expressão for igual a valor1
        break;
    case valor2:
        // bloco de código a ser executado se a expressão for igual a valor2
        break;
    // outros casos possíveis
    default:
        // bloco de código a ser executado se nenhum dos casos anteriores for correspondido
        break;
}
```
+ A palavra-chave `switch` indica o início da estrutura condicional.
+ Dentro dos parênteses, você fornece uma expressão cujo valor será comparado com os diferentes casos.
+ Em cada `case`, você especifica um valor que a expressão pode ter para executar o respectivo bloco de código.
+ O bloco de código associado a cada `case` é executado se a expressão for igual ao valor especificado.
+ O bloco de código associado ao `default` é executado se nenhum dos casos anteriores for correspondido.

**Estruturas de Repetição**
As estruturas de repetição permitem executar um bloco de código várias vezes com base em uma condição. Em C++, temos três principais estruturas de repetição: `while`, `do-while` e `for`.

# <a name="while"></a>`while`
A estrutura `while` executa um bloco de código repetidamente enquanto uma condição for verdadeira.

Aqui está a sintaxe básica do `while`:
```c++
while (condicao) {
    // bloco de código a ser repetido enquanto a condição for verdadeira
}
```
+ A palavra-chave `while` indica o início da estrutura de repetição.
+ Entre parênteses, você deve fornecer uma expressão ou condição que será avaliada como verdadeira ou falsa.
+ Após a condição, você abre um bloco de código entre chaves `{}`. Esse bloco de código será repetido enquanto a condição for verdadeira.

# <a name="dowhile"></a>`do-while`
A estrutura `do-while` é semelhante ao `while`, mas garante que o bloco de código seja executado pelo menos uma vez, mesmo que a condição seja falsa.

Aqui está a sintaxe básica do `do-while`:
```c++
do {
    // bloco de código a ser repetido
} while (condicao);
```
+ A palavra-chave `do` indica o início da estrutura de repetição.
+ Após o bloco de código, você deve fornecer a palavra-chave `while` seguida da condição entre parênteses.
+ O bloco de código será repetido enquanto a condição for verdadeira.

# <a name="for"></a>`for`
A estrutura `for` permite executar um bloco de código repetidamente por um número específico de vezes.

Aqui está a sintaxe básica do `for`:
```c++
for (inicializacao; condicao; atualizacao) {
    // bloco de código a ser repetido
}
```
+ A palavra-chave `for` indica o início da estrutura de repetição.
+ Entre parênteses, você deve fornecer três partes separadas por ponto e vírgula:
+ A inicialização define a variável de controle e seu valor inicial.
+ A condição é avaliada antes de cada iteração. Se for verdadeira, o bloco de código será executado. Se for falsa, a execução do loop é interrompida.
+ A atualização é executada após cada iteração e é usada para atualizar a variável de controle.
+ Após os parênteses, você abre um bloco de código entre chaves `{}`. Esse bloco de código será repetido até que a condição seja falsa.

# <a name="foreach"></a>`for each`
O loop "for-each" é usado para percorrer elementos de um contêiner, como um vetor, uma lista, um conjunto, um mapa, etc. A estrutura básica do loop "for-each" é a seguinte:
```cpp
for (tipo elemento : contêiner) {
    // corpo do loop
}
```
+ `tipo` é o tipo do elemento que será iterado.
+ `elemento` é a variável que receberá cada elemento do contêiner a cada iteração.
+ `contêiner` é o contêiner que contém os elementos a serem percorridos.

Vamos ver um exemplo básico utilizando um vetor:
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    for (int num : numeros) {
        std::cout << num << " ";
    }

    return 0;
}
```
Neste exemplo, estamos percorrendo os elementos do vetor `numeros`. A cada iteração, o valor do elemento atual é atribuído à variável `num` e, em seguida, exibimos esse valor no console.

## Iteração por referência:

Em alguns casos, pode ser útil modificar os elementos do contêiner durante a iteração. Nesse caso, podemos usar uma referência ao elemento no loop "for-each". Veja um exemplo:
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    for (int& num : numeros) {
        num *= 2;
    }

    for (int num : numeros) {
        std::cout << num << " ";
    }

    return 0;
}
```
Neste exemplo, multiplicamos cada elemento do vetor por 2 usando uma referência `int& num`. Em seguida, exibimos os elementos modificados no console.

## Uso de contêineres não modificáveis:

Em alguns casos, você pode ter um contêiner que não deseja modificar durante a iteração. Nesse caso, é recomendável usar uma referência constante para o elemento no loop "for-each". Veja um exemplo:
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    for (const int& num : numeros) {
        std::cout << num << " ";
    }

    return 0;
}
```
Neste exemplo, usamos uma referência constante `const int& num` para os elementos do vetor. Isso indica que não queremos modificar os elementos durante a iteração.

## Uso de auto:
Em vez de especificar o tipo do elemento explicitamente, você pode usar a palavra-chave `auto` para que o compilador deduza automaticamente o tipo. Veja um exemplo:
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    for (auto num : numeros) {
        std::cout << num << " ";
    }

    return 0;
}
```
Neste exemplo, usamos `auto num` para a variável que receberá os elementos do vetor. O compilador deduzirá automaticamente o tipo apropriado.

## Contêineres com tipos personalizados:

O loop "for-each" também pode ser usado com contêineres que armazenam tipos personalizados. Para isso, o tipo personalizado deve oferecer suporte à iteração, geralmente implementando os operadores `begin()` e `end()`. Aqui está um exemplo:
```cpp
#include <iostream>
#include <vector>

struct Pessoa {
    std::string nome;
    int idade;
};

int main() {
    std::vector<Pessoa> pessoas = { {"João", 25}, {"Maria", 30}, {"Pedro", 35} };

    for (const Pessoa& pessoa : pessoas) {
        std::cout << pessoa.nome << " tem " << pessoa.idade << " anos." << std::endl;
    }

    return 0;
}
```
Neste exemplo, temos um vetor de objetos do tipo `Pessoa`, com cada objeto contendo um nome e uma idade. Usamos o loop "for-each" para percorrer os elementos do vetor e exibir as informações de cada pessoa.

**Estruturas de Controle de Fluxo**
As estruturas de controle de fluxo permitem controlar o fluxo de execução do programa, como pular para uma parte específica do código ou interromper a execução. Em C++, temos duas principais estruturas de controle de fluxo: `break` e `continue`.

# <a name="break"></a>`break`

A palavra-chave `break` é usada para interromper a execução de uma estrutura de controle, como `switch` ou `for`. Quando o `break` é encontrado, a execução é interrompida e o programa continua após a estrutura de controle.

# <a name="continue"></a>`continue`

A palavra-chave `continue` é usada em estruturas de repetição, como `for` e `while`. Quando o `continue` é encontrado, a execução do loop é interrompida para a iteração atual e passa para a próxima iteração.

Essas são as principais estruturas de controle em C++. Com essas estruturas, você pode controlar o fluxo de execução do seu programa, tomar decisões e repetir ações de acordo com as condições específicas.

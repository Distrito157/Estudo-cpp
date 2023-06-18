# Introdução
Em C++, as variáveis são usadas para armazenar valores na memória do computador.
Antes de usar uma variável, você precisa declará-la, especificando seu tipo de dado e
um nome único. Os tipos de dados determinam a natureza dos valores que a variável pode
armazenar e as operações que podem ser realizadas sobre esses valores.

# Aqui estão alguns dos tipos de dados básicos em C++:
**Inteiros:** O tipo `int` é usado para armazenar números inteiros. Ele pode representar valores positivos,
negativos e zero. Por exemplo:
```C++
int idade = 20;
```
**Ponto Flutuante:** Existem dois tipos principais de números de ponto flutuante em C++: `float` e `double`.
O tipo `float` é usado para números de ponto flutuante de precisão simples, enquanto o tipo `double` é usado para
números de ponto flutuante de dupla precisão, que são mais precisos. Por exemplo:
```C++
float altura = 1.75;
double peso = 68.5;
```
**Caracteres:** O tipo `char` é usado para armazenar caracteres individuais. Um caractere é representado
entre aspas simples (`'`). Por exemplo:
```C++
char genero = 'M';
```
**Booleanos:** O tipo `bool` é usado para representar valores booleanos, ou seja, verdadeiro ou falso.
O valor `true` representa verdadeiro, enquanto o valor `false` representa falso. Por exemplo:
```C++
bool temCarro = true; // true = 1
bool temLancha = false; // false = 0
```
**Strings:** Embora C++ não tenha um tipo de dado de string embutido, você pode usar a classe `std::string`
do C++ Standartd Library para trabalhar com strings. Uma string é uma sequência de caracteres. Por exemplo:
```C++
std::string nome = "João";
```

Além desses tipos básicos, C++ também oferece tipos de dados compostos, como arrays, estruturas, enums e classes, que permitem armazenar e manipular coleções de valores relacionados.

É importante observar que em C++, é uma prática recomendada inicializar as variáveis quando são declaradas. Isso pode ser feito atribuindo um valor inicial na declaração da variável. Por exemplo:
```C++
int numero = 10;
```

Também é possível modificar o valor de uma variável depois de declará-la, atribuindo um novo valor usando o operador de atribuição (=).

Essas são apenas algumas informações básicas sobre variáveis e tipos de dados em C++. À medida que você avança no aprendizado, você encontrará tipos de dados mais avançados e poderá criar suas próprias classes e estruturas personalizadas. É recomendável consultar recursos adicionais e praticar para aprofundar seu conhecimento em C++.

# Variáveis globais em C++:
+ As variáveis globais em C++ são declaradas fora de qualquer função, no escopo global do programa.
+ Elas podem ser acessadas e modificadas em qualquer parte do programa, assim como em outras linguagens de programação.
+ Para declarar uma variável global, você a define fora de qualquer função, geralmente no início do arquivo de código-fonte.
+ Exemplo:
```C++
#include <iostream>

int globalVariable = 10;

void modifyGlobalVariable() {
    globalVariable = 20;
    std::cout << globalVariable << std::endl;
}

int main() {
    std::cout << globalVariable << std::endl; // Saída: 10
    modifyGlobalVariable(); // Saída: 20
    std::cout << globalVariable << std::endl; // Saída: 20

    return 0;
}
```
# Variáveis locais em C++:
+ Em C++, as variáveis locais são declaradas dentro de um bloco de código, como uma função, loop ou bloco condicional.
+ Elas são visiveis apenas dentro do escopo em que foram declaradas e não podem ser acessadas fora desse escopo.
+ Quando o escopo termina, as variáveis locais são destruídas.
+ Exemplo:
```C++
#include <iostream>

int calculateSum() {
    int localVariable = 10;
    int anotherLocalVariable = 20;
    int sum = localVariable + anotherLocalVariable;
    return sum;
}

int main() {
    std::cout << calculateSum() << std::endl; // Saída: 30
    //std::cout << localVariable << std::endl; // Erro: localVariable não está definida

    return 0;
}
```
Em resumo, as variáveis globais em C++ são declaradas fora de qualquer função e podem ser acessadas e modificadas em todo o programa. As variáveis locais são declaradas dentro de um bloco de código e são visiveis apenas dentro desse bloco.

Lembre-se de que o uso excessivo de variáveis globais pode dificultar a depuração e a manutenção do código, tornando-o mais propenso a erros e menos modular. É recomendado utiliz variáveis locais sempre que possível e limitar o escopo das variáveis ao mínimo necessário.

# Índice
+ [Introdução](#introducao)
+ [Tipos de dados](#tiposdedados)
+ [Variáveis globais](#variaveisglobais)
+ [Variáveis locais](#variaveislocais)
+ [Incremento e decremento de variáveis](#incrementodecremento)
+ [Constantes](#constantes)
+ [Inversão de valores em variáveis](#inversaodevalores)
+ [Concatenação de Strings](#concatenastring)
+ [Enum (enumeração)](#enum)

# <a name="introducao"></a>Introdução
Em C++, as variáveis são usadas para armazenar valores na memória do computador.
Antes de usar uma variável, você precisa declará-la, especificando seu tipo de dado e
um nome único. Os tipos de dados determinam a natureza dos valores que a variável pode
armazenar e as operações que podem ser realizadas sobre esses valores.

# <a name="tiposdedados"></a>Aqui estão alguns dos tipos de dados básicos em C++:
**Inteiros:** O tipo `int` é usado para armazenar números inteiros. Ele pode representar valores positivos,
negativos e zero. Por exemplo:
```c++
int idade = 20;
```
**Ponto Flutuante:** Existem dois tipos principais de números de ponto flutuante em C++: `float` e `double`.
O tipo `float` é usado para números de ponto flutuante de precisão simples, enquanto o tipo `double` é usado para
números de ponto flutuante de dupla precisão, que são mais precisos. Por exemplo:
```c++
float altura = 1.75;
double peso = 68.5;
```
**Caracteres:** O tipo `char` é usado para armazenar caracteres individuais. Um caractere é representado
entre aspas simples (`'`). Por exemplo:
```c++
char genero = 'M';
```
**Booleanos:** O tipo `bool` é usado para representar valores booleanos, ou seja, verdadeiro ou falso.
O valor `true` representa verdadeiro, enquanto o valor `false` representa falso. Por exemplo:
```c++
bool temCarro = true; // true = 1
bool temLancha = false; // false = 0
```
**Strings:** Embora C++ não tenha um tipo de dado de string embutido, você pode usar a classe `std::string`
do C++ Standartd Library para trabalhar com strings. Uma string é uma sequência de caracteres. Por exemplo:
```c++
std::string nome = "João";
```

Além desses tipos básicos, C++ também oferece tipos de dados compostos, como arrays, estruturas, enums e classes, que permitem armazenar e manipular coleções de valores relacionados.

É importante observar que em C++, é uma prática recomendada inicializar as variáveis quando são declaradas. Isso pode ser feito atribuindo um valor inicial na declaração da variável. Por exemplo:
```c++
int numero = 10;
```

Também é possível modificar o valor de uma variável depois de declará-la, atribuindo um novo valor usando o operador de atribuição (=).

Essas são apenas algumas informações básicas sobre variáveis e tipos de dados em C++. À medida que você avança no aprendizado, você encontrará tipos de dados mais avançados e poderá criar suas próprias classes e estruturas personalizadas. É recomendável consultar recursos adicionais e praticar para aprofundar seu conhecimento em C++.

# <a name="variaveisglobais"></a>Variáveis globais em C++:
+ As variáveis globais em C++ são declaradas fora de qualquer função, no escopo global do programa.
+ Elas podem ser acessadas e modificadas em qualquer parte do programa, assim como em outras linguagens de programação.
+ Para declarar uma variável global, você a define fora de qualquer função, geralmente no início do arquivo de código-fonte.
+ Exemplo:
```cpp
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
# <a name="variaveislocais"></a>Variáveis locais em C++:
+ Em C++, as variáveis locais são declaradas dentro de um bloco de código, como uma função, loop ou bloco condicional.
+ Elas são visiveis apenas dentro do escopo em que foram declaradas e não podem ser acessadas fora desse escopo.
+ Quando o escopo termina, as variáveis locais são destruídas.
+ Exemplo:
```c++
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

# <a name="incrementodecremento"></a>Incremento e decremento de variáveis:
Em C++, os operadores de incremento e decremento são usados para aumentar ou diminuir o valor de uma variável por um determinado número. Esses operadores têm duas formas: `pré-incremento/pre-decremento` e `pós-incremento/pós-decremento.`
## Incremento:
+ pré-incremento (++variavel): Aumenta o valor da variável em 1 antes de qualquer outra operação.
+ Pós-incremento (variavel++): Aumenta o valor da variável em 1 após a operação atual.

Exemplo de pré-incremento:
```c++
#include <iostream>

int main() {
  int x = 5;
  int y = ++x;

  std::cout << "x: " << x << std::endl; // Saída: 6
  std::cout << "y: " << y << std::endl; // Saída: 6

  return 0;
}
```
Nesse exemplo, o pré-incremento `++x` é aplicado à variável `x` antes de atribuir seu valor à variável `y`. Como resultado, tanto `x` quanto `y` se tornam 6.

Exemplo de pós-incremento:
```c++
#include <iostream>

int main() {
  int x = 5;
  int y = x++;

  std::cout << "x: " << x << std::endl; // Saída: 6
  std::cout << "y: " << y << std::endl; // Saída: 5

  return 0;
}
```
Nesse exemplo, o pós-incremento `x++` é aplicado à variável `x` após atribuir seu valor à variável `y`. Como resultado, `x` se torna 6, mas `y` retem o valor original de `x`, que é 5.

## Decremento:
+ Pré-decremento (--variavel): Diminui o valor da variável em 1 antes de qualquer outra operação.
+ Pós-decremento (variavel--): Diminui o valor da variável em 1 após a operação atual.

Exemplo de pré-decremento:
```c++
#include <iostream>

int main() {
  int x = 5;
  int y = --x;

  std::cout << "x: " << x << std::endl; // Saída: 4
  std::cout << "y: " << y << std::endl; // Saída: 4

  return 0;
}
```
Nesse exemplo, o pré-decremento `--x` é aplicado à variável `x` antes de atribuir seu valor à variável `y`. Como resultado, tanto `x` quanto `y` se tornam 4.

Exemplo de pós-decremento:
```c++
#include <iostream>

int main() {
  int x = 5;
  int y = x--;

  std::cout << "x: " << x << std::endl; // Saída: 4
  std::cout << "y: " << y << std::endl; // Saída: 5

  return 0;
}
```
Nesse exemplo, o pós-decremento `x--` é aplicado à variável `x` após atribuir seu valor à variável `y`. Como resultado, `x` se torna 4, mas `y` retém o valor original de `x`, que é 5.

Os operadores de incremento e decremento são úteis para várias tarefas, como incrementar ou decrementar índices de loops, atualizar contadores e realizar cálculos baseados em contagem. Eles são especialmente convenientes em loops, pois permitem alterar o valor de uma variável de controle com facilidade.

Lembre-se de usá-los com cuidado e garantir que seu uso seja claro e compreensível no contexto do seu código.

# <a name="constantes"></a>Constantes
Em C++, existem duas formas principais de definir constantes: com a palavra-chave `const` e com a diretiva `#define`.
## Constantes definidas com `const`:
+ A palavra-chave `const` é usada para definir constantes com tipo de dado.
+ Essas constantes são conhecidas como constantes simbólicas.
+ Exemplo:
```c++
const int idade = 25;
const double pi = 3.1415;
const std::string nome = "João";
```
+ Nesse exemplo, `idade` é uma constante inteira, `pi` é uma constante de ponto flutuante e `nome` é uma constante de string.
+ Essas constantes possuem tipo de dado e ocupam espaço na memória durante a execução do programa.
+ Elas são úteis quando você deseja definir valores que não serão modificados posteriormente.

## Constantes definidas com `#define`:
+ A diretiva `#define` é usada para criar macros de substituição de texto.
+ Elas não possuem tipo de dado e são substituições simples de texto.
+ Exemplo: 
```c++
#define PI 3.1415
#define SAUDACAO "Olá, mundo!"
#define TEXTO std::cout << "Oi, tudo bem" << endl
```
+ Nesse exemplo, `PI` é uma macro definida como `3.1415` e `SAUDACAO` é uma macro definida como `"Olá, mundo!"`.
+ Durante a compilação, todas as ocorrências de `PI` serão substituidas por `3.1415` e todas as ocorrências de `SAUDACAO` serão substituidas por `"Olá, mundo!"`.
+ As macros `#define` não possuem tipo de dado e não ocupam espaço na memória durante a execução do programa.

A principal diferença entre as constantes definidas com `const` e as macros `#define` é que as constantes `const` t^em tipo de dado e podem ser utilizadas com mais segurança, pois são verificadas pelo compilador quanto ao seu uso correto.

As constantes simbólicas definidas com `const` são mais comumente usadas em C++ devido à sua capacidade de manter o tipo de dado e oferecer maior segurança e legibilidade ao código.

É importante lembrar que as constantes em C++ devem ter nomes significativos, seguindo as convenções de nomenclatura da linguagem, para tornar o código mais compreensível e facilitar a manutenção futura.

Em resumo, as constantes em C++ são usadas para definir valores fixos que não serão alterados durante a execução do programa. Elas podem ser definidas com a palavra-chave `const` para constantes simbólicas com tipo de dado ou com a diretiva `#define` para macros de substituição de texto.

# <a name="inversaodevalores"></a>Inversão de valores em variáveis
Para inverter o valor de uma variável em C++, você pode utilizar uma variável auxiliar para armazenar temporiamente o valor original e, em seguida, atribuir o valor invertido à variável original. Existem várias maneiras de realizar essa inversão, dependendo do tipo de dado da variável.
## Inversão de variáveis numéricas:
```c++
int x = 10;
int aux = x;
x = -x;
// Agora x terá o valor -10
// ou
x = x * -1;
```
Nesse exemplo, o valor original de `x` é armazenado em `aux`. Em seguida, o valor de `x` é invertido multiplicando-o por -1.

## Inversão de variáveis booleanas:
```c++
bool condicao = true;
condicao = !condicao;
// Agora condicao terá o valor false
```
Nesse exemplo, o operador lógico NOT(`!`) é usado para inverter o valor booleano de `condicao`.

## Inversão de variáveis de caracteres:
```c++
char c = 'A';
c = ~c;
// Agora c terá o valor 64 em ASCII (complemento de bit)
```
Nesse exemplo, o operador NOT(`~`) é usado para inverter cada bit do valor caractere `c`. Isso é aplicável ao conjunto de caracteres ASCII.

Lembre-se de que a maneira de inverter valores de variáveis pode variar dependendo do tipo de dado. Além disso, considere as restrições e comportamentos específicos do tipo de dado ao realizar operações de inversão.

# <a name="concatenastring"></a>Concatenação de Strings:
A concatenação de strings é o processo de combinar duas ou mais strings em uma única string. Em C++, você pode usar o operador de adição (+) ou o método `append()` para realizar a concatenação de strings. Aqui estão exemplos de ambos os métodos:

1. Utilizando o operador de adição (+):
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = " World!";
    string str3 = str1 + str2;
    
    cout << "Resultado: " << str3 << endl;
    
    return 0;
}
```
Neste exemplo, usamos o operador de adição (+) para concatenar as strings `str1` e `str2`, armazenando o resultado na string `str3`.

2. Utilizando o método `append()`:
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = " World!";
    string str3 = str1;
    str3.append(str2);
    
    cout << "Resultado: " << str3 << endl;
    
    return 0;
}
```
Neste exemplo, usamos o método `append()` para adicionar o conteúdo da string `str2` à string `str3`, que inicialmente contém o valor de `str1`.

### Concatenação de Números com Strings:
Além da concatenação de strings, você também pode concatenar números com strings em C++. No entanto, é necessário converter os números em formato de string antes de realizar a concatenação. Você pode fazer isso usando a função `to_string()` ou a biblioteca `sstream`. Aqui estão exemplos dos dois métodos:

1. Utilizando a função `to_string()`:
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 42;
    string str = "O número é: " + to_string(num);
    
    cout << str << endl;
    
    return 0;
}
```
Neste exemplo, usamos a função `to_string()` para converter o número `num` em uma string antes de concatená-lo com a outra string.

1. Utilizando a biblioteca `sstream`:
```cpp
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int num = 42;
    stringstream ss;
    ss << "O número é: " << num;
    string str = ss.str();
    
    cout << str << endl;
    
    return 0;
}
```
Neste exemplo, utilizamos a classe `stringstream` da biblioteca `sstream` para realizar a concatenação do número `num` com a string.

Esses são os conceitos básicos e comuns para realizar a concatenação em C++. Lembre-se de que é importante converter os números em formato de string antes de realizar a concatenação.

# <a name="enum"></a>Enum (enumeração)
O enum (enumeração) em C++ é uma construção da linguagem que permite definir um novo tipo de dados personalizado, composto por um conjunto específico de valores nomeados. Os valores nomeados dentro do enum são chamados de "enumeradores". O enum fornece uma maneira conveniente de representar um conjunto limitado e predefinido de opções ou valores possíveis para uma variável ou propriedade.

Aqui estão os principais aspectos do enum em C++:

### Declaração: A declaração de um enum segue a seguinte sintaxe geral:
```cpp
enum NomeEnum {
  Valor1,
  Valor2,
  Valor3,
  // ...
};
```
Onde "NomeEnum" é o nome que você dá ao enum, e "Valor1", "Valor2", "Valor3" são os enumeradores, separados por vírgulas. Por padrão, cada enumerador é associado a um valor inteiro sequencial, começando por 0. No entanto, você pode atribuir valores específicos aos enumeradores manualmente.

### Atribuição manual de valores: É possível atribuir valores específicos aos enumeradores dentro do enum. Por exemplo:
```cpp
enum Status {
  Inativo = 0,
  Ativo = 1,
  Pausado = 2
};
```
Neste exemplo, os enumeradores "Inativo", "Ativo" e "Pausado" são associados aos valores 0, 1 e 2, respectivamente.

### Uso de enum: Depois de declarado, um enum pode ser utilizado para criar variáveis ou propriedades com esse tipo de dado personalizado. Veja um exemplo:
```cpp
enum DiaDaSemana {
  Segunda,
  Terca,
  Quarta,
  Quinta,
  Sexta,
  Sabado,
  Domingo
};

DiaDaSemana dia = Quarta;
```
Neste caso, declaramos uma variável chamada "dia" do tipo "DiaDaSemana" e atribuímos a ela o valor "Quarta", que é um enumerador definido dentro do enum "DiaDaSemana".

### Comparação de enum: Você pode comparar valores de enum usando operadores de igualdade (==) e desigualdade (!=). Por exemplo:
```cpp
if (dia == Quarta) {
  // Faça algo se o dia for Quarta-feira
}
```
Nesse trecho de código, comparamos se a variável "dia" é igual a "Quarta", que é um enumerador do enum "DiaDaSemana".

### Switch-case com enum: O enum é frequentemente utilizado com a estrutura switch-case para tomar decisões com base nos valores do enum. Veja um exemplo:
```cpp
switch (dia) {
  case Segunda:
    // Faça algo se o dia for Segunda-feira
    break;
  case Terca:
    // Faça algo se o dia for Terça-feira
    break;
  // ...
  default:
    // Faça algo se o dia não corresponder a nenhum caso anterior
    break;
}
```
Nesse exemplo, o switch-case é usado para executar diferentes blocos de código com base no valor do enum "DiaDaSemana".

O enum em C++ é especialmente útil quando você tem um conjunto fixo de opções ou valores que uma variável pode assumir. Ele ajuda a tornar o código mais legível, evitando o uso de valores literais arbitrários e substituindo-os por nomes significativos.

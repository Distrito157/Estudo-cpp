**Operadores Aritméticos:**
+ `+` (adição):Soma dois valores.
+ `-` (subtração):Subtrai o segundo valor do primeiro.
+ `*` (multiplicação):Multiplica dois valores.
+ `/` (divisão):Divide o primeiro valor pelo segundo.
+ `%` (módulo):Retorna o resto da divisão entre o primeiro valor e o segundo.
Exemplo:
```c++
int a = 10;
int b = 3;
int soma = a + b;       // soma = 13
int subtracao = a - b;  // subtracao = 7
int multiplicacao = a * b;  // multiplicacao = 30
int divisao = a / b;  // divisao = 3
int modulo = a % b;   // modulo = 1
```
**Operadores de Atribuição:**
+ `=` (atribuição):Atribui o valor do lado direito ao operando do lado esquerdo.
+ `+=` (atribuição de adição):Adiciona o valor do lado direito ao operando do lado esquerdo e atribui o resultado.
+ `-=` (atribuição de subtração):Subtrai o valor do lado direito do operando do lado esquerdo e atribui o resultado.
+ `*=` (atribuição de multiplicação):Multiplica o operando do lado esquerdo pelo valor do lado direito e atribui o resultado.
+ `/=` (atribuição de divisão):Divide o operando do lado esquerdo pelo valor do lado direito e atribui o resultado.
Exemplo:
```c++
int a = 5;
a += 3;  // equivalente a: a = a + 3; (a = 8)
a -= 2;  // equivalente a: a = a - 2; (a = 6)
a *= 4;  // equivalente a: a = a * 4; (a = 24)
a /= 6;  // equivalente a: a = a / 6; (a = 4)
```
**Operadores de Comparação:**
+ `==` (igual a):Verifica se dois valores são iguais.
+ `!=` (diferente de):Verifica se dois valores são diferentes.
+ `<` (menor que):Verifica se o valor do lado esquerdo é menor que o valor do lado direito.
+ `>` (maior que):Verifica se o valor do lado esquerdo é maior que o valor do lado direito.
+ `<=` (menor ou igual a):Verifica se o valor do lado esquerdo é menor ou igual ao valor do lado direito.
+ `>=` (maior ou igual a):Verifica se o valor do lado esquerdo é maior ou igual ao valor do lado direito.
Os operadores de comparação retornam um valor booleano (`true` ou `false`), indicando se a comparação é verdadeira ou falsa.
Exemplo:
```c++
int a = 5;
int b = 3;
bool igual = (a == b);  // igual = false
bool diferente = (a != b);  // diferente = true
bool menor = (a < b);  // menor = false
bool maior = (a > b);  // maior = true
bool menorOuIgual = (a <= b);  // menorOuIgual = false
bool maiorOuIgual = (a >= b);  // maiorOuIgual = true
```
**Operadores Lógicos:**
+ `&&` (AND lógico): Retorna `true` se ambas as expressões forem verdadeiras.
+ `||` (OR lógico): Retorna `true` se pelo menos uma das expressões for verdadeira.
+ `!` (NOT lógico): Inverte o valor booleano de uma expressão.
Exemplo:
```c++
bool expressao1 = true;
bool expressao2 = false;
bool resultadoAnd = expressao1 && expressao2;  // resultadoAnd = false
bool resultadoOr = expressao1 || expressao2;  // resultadoOr = true
bool resultadoNot = !expressao1;  // resultadoNot = false
```
**Operadores de Incremento e Decremento:**
+ ++ (incremento): Aumenta o valor da variável em 1.
+ -- (decremento): Diminui o valor da variável em 1.
Esses operadores podem ser usados tanto antes como depois da variável e têm diferenças sutis em seu comportamento, dependendo de onde são colocados.
Exemplo:
```c++
int a = 5;
int b = ++a;  // incrementa 'a' em 1 e atribui o valor incrementado a 'b' (b = 6)
int c = a--;  // atribui o valor atual de 'a' a 'c' e, em seguida, decrementa 'a' em 1 (c = 6, a = 5)
```
Esses são apenas alguns dos operadores mais comuns em C++. Existem outros operadores, como operadores bit a bit, operadores condicionais ternários e operadores de deslocamento, que podem ser explorados à medida que você avança em seu aprendizado. É sempre importante consultar a documentação oficial do C++ para obter informações mais detalhadas sobre os operadores e suas regras de uso.
[TODO] - Irei colocar mais outros tipos.

# Classes
As classes são uma parte fundamental da programação orientada a objetos em C++. Elas fornecem uma forma de organizar dados e comportamentos relacionados em uma única entidade. Aqui está uma introdução básica sobre como criar e utilizar classes em C++:

1. Definindo uma classe: Para definir uma classe, você precisa usar a palavra-chave `class`, seguida pelo nome da classe e um bloco de definição que contém os membros da classe. Os membros podem ser variáveis ​​(atributos) e funções (métodos). Aqui está um exemplo:
```cpp
class MinhaClasse {
public:
    int meuAtributo;

    void meuMetodo() {
        // Código do método
    }
};
```

1. Instanciando objetos: Depois de definir uma classe, você pode criar objetos (instanciar) da classe. Os objetos são instâncias específicas da classe com seus próprios conjuntos de valores para os atributos. Você pode criar objetos usando o operador `new` ou simplesmente declarando uma variável do tipo da classe. Aqui está um exemplo:
```cpp
MinhaClasse obj1;  // Objeto criado sem o operador new
MinhaClasse* obj2 = new MinhaClasse();  // Objeto criado com o operador new
```

1. Acessando membros: Para acessar os atributos e métodos de um objeto, você usa o operador de ponto `.`. Aqui está um exemplo:
```cpp
obj1.meuAtributo = 10;  // Acesso e atribuição do valor do atributo
obj1.meuMetodo();      // Chamada de um método do objeto
```

1. Modificadores de acesso: A visibilidade dos membros de uma classe pode ser controlada usando modificadores de acesso. Os três modificadores principais são `public`, `private` e `protected`. O modificador `public` permite que os membros sejam acessados por qualquer parte do código, `private` restringe o acesso aos membros dentro da própria classe e `protected` é semelhante ao `private`, mas permite acesso por classes derivadas (herança). Por padrão, se você não especificar um modificador, ele será `private`.

2. Construtores e Destrutores: Um construtor é um método especial chamado quando um objeto é criado. Ele é usado para inicializar os atributos do objeto. Um destrutor é um método especial chamado quando um objeto é destruído (geralmente no final do escopo). Aqui está um exemplo de construtor e destrutor:
```cpp
class MinhaClasse {
public:
    int meuAtributo;

    MinhaClasse() {
        meuAtributo = 0;  // Inicializando o atributo no construtor
        std::cout << "Construtor chamado" << std::endl;
    }

    ~MinhaClasse() {
        std::cout << "Destrutor chamado" << std::endl;
    }
};
```

1. Herança: C++ suporta herança, permitindo que uma classe herde atributos e métodos de outra classe. Isso é útil para reutilização de código e criação de relacionamentos entre classes. Aqui está um exemplo básico de herança:
```cpp
class ClasseBase {
public:
    int atributoBase;
};

class ClasseDerivada : public ClasseBase {
public:
    int atributoDerivado;
};
```

Essas são apenas algumas noções básicas sobre como criar e usar classes em C++. Existem muitos outros recursos e conceitos relacionados a classes, como sobrecarga de operadores, funções membros estáticas, herança múltipla, entre outros. Recomendo aprofundar seus estudos em program

ação orientada a objetos para explorar todos esses recursos em detalhes.

# Valid Parentheses - C++

Projeto desenvolvido em C++ para validar expressões contendo parênteses, colchetes e chaves.

## Objetivo

Verificar se uma sequência de símbolos está corretamente balanceada.

Exemplos:

✅ Válidos

```text
()
()[]{}
[{()}]
```

❌ Inválidos

```text
([)]
}{)(][
(
)
```

## Conceitos Aplicados

- Pilhas (Stack)
- Estruturas de Dados
- Manipulação de Strings
- Algoritmos de Validação
- STL (Standard Template Library)

## Funcionamento

O algoritmo:

1. Empilha símbolos de abertura.
2. Ao encontrar um símbolo de fechamento, verifica o topo da pilha.
3. Remove o topo caso haja correspondência.
4. Ao final, a pilha deve estar vazia para que a expressão seja válida.

## Tecnologias

- C++
- STL

## Autor

Deyvison

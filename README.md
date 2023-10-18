# eng_ling

## Comentário
`# exemplo de comentário`

## Nomenclatura de variáveis
- Case sensitive
- Definição de nomes
  - É permitido letras, dígitos e underscore.
  - Deve iniciar com letra.
  - Não é permitido caracteres especiais e espaços em branco. 
- Snake case
- Tudo maiúsculo para constantes

## Operadores

## Dados primitivos

## Expressões
### Aritméticas
- Precedência de operadores
  - Parênteses
  - Multiplicação, divisão, módulo
  - Soma, subtração

### Relacionais
- Operadores: >, <, >=, <=, !=, ==
- Sempre binário e infixo

### Booleanas
- Precedência de operadores
  - !
  - &&
  - ||

## Dados definidos pelo usuário
### Structs
TODO: documentar uso

### Arranjos
TODO: documentar uso
- Simples
- Bidimensionais
- Multidimensionais

## Binding
| Atributo      | Tipo               |
|---------------|--------------------|
| Nome          | Estático           |
| Tipo          | Estático           |
| Valor         | Estático/Dinâmico  |
| Endereço      | Estático/Dinâmico  |
| Escopo        | ?                  |
| Tempo de vida | ?                  |

## Curto-circuito
- falso && qualquer coisa resulta em falso
- verdadeiro || qualquer coisa resulta em verdadeiro

# BNF
<program> → <decs_var> <subprograms> <principal>

<decs_var> → 
            | <dec_var>
            | <dec_var> <decs_var>
            | <assigns>


<dec_var> → <type_modifiers> <type> <ids>
          | <type_modifiers> <type> id EQUAL <values>
	
<values> → value
        | value COLOM <values>
        | <expr>
        | <expr> COLOM <values>

<expr> → <expr> + <expr>
       | <expr> - <expr>
       | <term>

<term> → <term> * <term>
       | <term> / <term>
       | <term> % <term>
       | <factor>

<factor> → OP <expr> CP
         | id
         | <function_call>
         | value

<assigns> → <assign>
          | <assign> SC <assigns>

<assign> → id EQUAL <expr>

<subprograms> →
              | <subprogram> <subprograms>

<subprogram> → <proc>
             | <function>

<proc> → id OP <params> CP <stmts>

<function> → <type> id OP <params> CP <stmts> return value

<params> →
         | <decs_var>

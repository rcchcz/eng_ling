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
soma: **\+** <br> 
subtração: **\-** <br>
multiplicação: **\*** <br>
divisão: **/**  <br>
resto: **%** <br>
concatenação: **++** <br>


## Dados primitivos
- bool
- int
- float
- string

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
<u>lexema:</u> str <br>
<u>definição:</u> struct nome {
	tipo_campo1 nome_campo1;
	tipo_campo2 nome_campo2;
}
TODO: documentar uso

### Arranjos
<u>lexema:</u> arr <br>
<u>definição:</u>  arr<tipo> <nome>[tamanho];

TODO: documentar uso
- Simples
- Bidimensionais
- Multidimensionais

### Tuplas
<u>lexema:</u> tpl <br>
<u>definição:</u> tpl (tipo1,tipo2) <nome_tupla> = (valor_tipo1, valor_tipo2)
<br>TODO: documentar uso

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
````bash
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
````

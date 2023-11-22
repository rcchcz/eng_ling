# compiler name goes \*here\*

## Comment
`# this line will be understood as a comment`

There is no notation for multiline comments, each line must be commented individually with '#'.

## Variable naming
- The compiler is case sensitive
- Only letters, digits and underscore are allowed
- Must start with a letter or underscore
- Good practices (recommended, but not mandatory)
  - Snake case pattern
  - All capital for constants

## Expressions
### Evaluation order
This language evaluates expressions from left to right.

### Short circuit
- `false && A` returns `false` (the value of A is not calculated)
- `true || A` returns `true` (the value of A is not calculated)

### [TO DO] Accepted forms of expression

### Strings
It is possible to concatenate two strings using the `++` operator.

## Arithmetic expressions 
### Operators
- Sum: `+` 
- Subtraction: `-`
- Multiplication: `*`
- Division: `/`
- Modulo: `%`
- Power: `**`

### Operators precedence
- `**`
- `/`, `*`, `%`
- `+`, `-`

It is possible to change the order of precedence by assigning higher priority using parentheses.

## Primitive data types
- `bool`, hold one of two values: `true` or `false`
- `int`, hold an integer value from -2,147,483,648 to 2,147,483,647
- `float`, hold a floating point number from 1.2E-38 to 3.4E+38
- `string`, hold a sequence of characters terminated with a null character

## Boolean expressions 
### Operators
- Not: `!`
- And: `&&`
- Or: `||`

### Operators precedence
- `!`
- `&&`
- `||`

## Relational expressions
### Operators
- Equal to: `==`
- Not equal to: `!=`
- Greater than: `>`
- Less than: `<`
- Greater than or equal to: `>=`
- Lesser than or equal to: `<=`

### Operators precedence
All relational operators have the same precedence. To calculate the result of the expression, the order in which they appear is considered.

## User-defined data
### Struct
Generic definition:
```
struct nameOfStruct {
  type1 fieldName1;
  type2 fieldName2;
  ...
  typeN fieldNameN;
}
```

Access a field:
```
structNameVariable.fieldName
```

As a concrete example, a scruct "Person":
```
struct Person {
  string name;
  int id;
  int age;
}
```
<!-- --------------------------- -->
Creating a variable of type "Person":
```
```

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


## [TO DO] Add grammar rules

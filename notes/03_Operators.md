## Arithmetic Operators

We can also perform basic mathematical operations with numbers.

```cpp
int a = 6;
int b = 3;
```

Use + for addition:

```cpp
cout<<a + b; // prints 9
```

Use - for subtraction:

```cpp
cout<<a - b; // prints 3
```

Use * for multiplication:

```cpp
cout<<a * b; // prints 18
```

Use / (forward slash) for division:

```cpp
cout<<a / b; // prints 2
```

Use % (percent symbol, called modulo operator) for the division remainder:

```cpp
cout<<a % b; // prints 0 as 6 is evenly divisible by 3
```

Use ++ for increasing the value of a variable by 1:

```cpp
a++;
cout<<a; // prints 7
```

Use -- for decreasing the value of a variable by 1:

```cpp
b--;
cout<<b; // prints 2
```

## Assignment Operators

In programming, assignment operators help you set or change the value of a variable.

Basic Assignment

Here's a simple example:

```cpp
int length;
length = 15;
```

In this example, the = operator sets the value of length to 15.

## Compound Assignment Operators

Compound Assignment Operators are just a shorthand way of performing operations on a variable and assigning the result back to the variable.

Without using the compound assignment operators we write -

```cpp
length = 15;
length = length + 5;
```

The same thing using Compound Assignment Operator would be written as-

```cpp
length = 15;
length += 5;
```

We can use any other operator in the same way:

- x -= 5        (Subtracts 5 from x and assigns the result back to x)
- x *= 3        (Multiplies x by 3 and assigns the result back to x)
- x /= 3        (Divides x by 3 and assigns the result back to x)
- x %= 3        (Finds the remainder when x is divided by 3 and assigns the result back to x)

## Increment and Decrement Operator

In the Arithmetic Operators, we saw increment and decrement operators(++ and --). They are used to increase or decrease any value by 1.

There are two types of Increment or Decrement operators:

- `Pre-Increment or Decrement Operators`: These increase or decrease the value by 1 first, and then returns the value.

```cpp
int a = 5;
cout<<++a<<endl;
```

Here the Output is:

```cpp
6
```

It increases the value to 6 first and then outputs the value.

- `Post-Increment or Decrement Operators` : These return the value, and then increases or decreases the value by 1.

```cpp
int a = 5;
cout<<a++<<endl;
cout<<a<<endl;
```

Here the Output is:

```cpp
5
6
```

- It outputs the value first, so the first output is 5.
- Then it increments the value, which becomes 6.
- Then the incremented value is outputted.

Similarly to integers, we can even increment or decrement float or double values

```cpp
float x = 2.4;
x++;
cout<<x<<endl;
```

This will output 

```txt
3.4
```

We can even increment or decrement characters. For example:

```cpp
char ch = 'r';
ch++;
cout<<ch<<endl;
```

This will output 

```txt
s
```

## Relation Operators

Relation operators help you compare two values or variables. They give you a result of either 1(true) or 0(false) based on the comparison.

### Basic Comparison

Let's start with a simple example:

```cpp
int height1 = 12;
int height2 = 14;
cout<<(height1 < height2); // Outputs 1(meaning true) because 12 is less than 14
```

In this example, the < operator compares height1 and height2. Since height1 is less than height2, it returns 1.

Note: It is important to enclose the condition in brackets else C++ will throw an error.

## Other Relation Operators

Here are some more examples of relation operators:

- a > b          (Checks if a is greater than b)
- a == b        (Checks if a is equal to b)
- a != b        (Checks if a is not equal to b)
- a >= b        (Checks if a is greater than or equal to b)
- a <= b        (Checks if a is less than or equal to b)

## Logical Operators

Logical operators help you combine multiple conditions to check if they are True or False. They are often used to make decisions based on multiple criteria.

## Basic Logical Operations

Here are the basic logical operators and their usage:

- `&&` (Logical AND: returns 1(true) only if both conditions are true)

```cpp
(a > 5 && a < 10)  // returns 1 only if a is greater than 5 but less than 10
```

- `||` (Logical OR: returns 1 if at least one condition is True)

```cpp
(a > 10 || a < 5)  // returns 1 if a is greater than 10 or less than 5
```

- `!` (Logical NOT: reverses the result of the condition)

```cpp
(!(a > 5)) // returns 1 if (a > 5) results to False, returns 0(false) if (a > 5) results to True
```

## Operator Precedence and Associativity

You may be familiar with BODMAS (or PEMDAS in some regions) rule for evaluating arithmetic expressions. It says we solve parenthesis first, then divide, then multiply, then add and then subtract. Similarly there are two main rules a program follows to evaluate an arithmetic expression:

- Precedence - It tells the priority of operations.
- Associativity - It tells what order the operations with the same priority will be performed in.

## Operator Precedence 

Operator precedence means that some operations are done before others when evaluating an expression. Operators with higher precedence are evaluated before those with lower precedence. This concept is similar to the rules of arithmetic, where multiplication and division takes precedence over addition and subtraction.

Here's the order of operator precedence in C++ from highest to lowest:

- Parentheses: ()
- Postfix operators: ++, --
- Unary operators: +, -, !, ~, ++, --, (type)
- Multiplicative operators: *, /, %
- Additive operators: +, -
- Relational operators: <, >, <=, >=
- Equality operators: ==, !=
- Logical AND operator: &&
- Logical OR operator: ||
- Assignment operators: =, +=, -= ... and so on

## Associativity

When an expression contains operators of the same precedence level, associativity determines their order of evaluation.

- Left-Associative: Operators are evaluated from left to right. For instance, in a + b - c, addition and subtraction, being left-associative, will first evaluate a + b, and then subtract c from the result.

- Right-Associative: Although less common in C++, some operators are right-associative, meaning they are evaluated from right to left. An example is the assignment operator =.
In a = b = c, c is assigned to b, and then the resulting value of b is assigned to a.

Understanding these principles is crucial for correctly interpreting and writing C++ programming expressions.
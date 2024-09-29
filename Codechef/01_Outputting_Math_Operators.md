## Introduction

Let us output an integer in C++.

C++ has a few lines of code which we write in almost all programs.
These are the first 4 lines and the last line that you see in the program to your right. We are going to learn about them in some time.

Let's break down this line of code:

1. `cout`: Pronounced as see-out, cout stands for "character output stream". It is used to output data to screen.

2. `<<` : This is the stream insertion operator. It is used with cout to send data to the output stream.

3. `12` : This is the data we want to print. Here, it's the number 12.

Semicolon is used to end a statement, like period (.) in English.

So, when you write `cout << 12;`, it tells the computer to print the number 12 on screen.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 12;
}
```

### Comments

Observe the code in the code editor. It has some grey lines. These are called comments. Comments are lines that don't affect the code in any way. These are just for our reference and to better understand our code. We will be using comments like these to explain the code or to give you instructions on what to do.

You can make your own comments by starting any line with double slashes //

This will make the whole line a comment and whatever is in that line will not be considered part of the code when executing the code.

You can also make multi-line comments by starting the body of your comments by /* and ending it with */.

Look at the comments inside the code editor for better reference.

```cpp
#include <iostream>
using namespace std;

int main() {
    //This is a single line comment explaining that the next line prints 12
    cout << 12;
    
    /*
    This
    Is 
    A 
    Multi-line 
    Comment 
    It explains that the next line will print 14
    */
    cout<<14;
}
```

### Arithmetic Operations

We can also perform mathematical operations (like addition, subtraction etc) with cout.

These use the familiar symbols of:

- `+` for addition
- `−` for subtraction
- `∗` for multiplication
- `/` for division

To add two numbers we do this:

```cpp
cout << 21 + 40;
```

The above line of code will output: 61

### Printing Text

To output a text, we do this

```cpp
cout << "I love C++";
```

This will print I love C++ to the screen. Notice how I love C++ is written inside "" (double quotes). You always have to enclose your text in double quotes ("") when printing.

### Multiple Outputs

We can add as many cout statements as we want in our code.

```cpp
#include <iostream>
using namespace std;

int main() {
    // add two cout statements
    cout << 3 + 4;
    cout << 2 + 1;
}

// Output : 73
```

### Outputs in Separate Lines

When we use multiple cout statements, everything gets printed on one line.

```cpp
cout << 20;
cout << 40;

// Output:
// 2040
```

What to do if we want to print 20 and 40 on separate lines?

We can use << endl to have the next outputs be on the next line. It is like pressing the Enter / Return key on your keyboard, but for the output displayed.

Example:

```cpp
cout << 20 << endl;
cout << 40 << endl;

// Output:
// 20
// 40
```

### Multiple outputs using a single line

You can also have multiple outputs together in a single "cout" command.
They are joined together using the "<<" symbol.

So, for example,

```cpp
cout << 2;
cout << endl;
cout << 3;
```

and 

```cpp
cout << 2 << endl << 3;
```

are equivalent.

### Inserting space between outputs

If you want the output to be in the same line and have a space separate them,

- We can use " " to act as an empty space in between multiple outputs.
- We had seen previously that text has to be enclosed within double quotes during cout ("text")
- An empty space is a blank space between double quotes (" ")

For example, to print: 2 2, we can write

```cpp
cout << 2 << " " << 2;
```

### Inserting text Between Outputs

In the last lesson, we wanted space between numbers so added an empty space inside quotes " ".

If we want any other text in between the outputs we can provide that text inside " " sign.

Example:

```cpp
cout << 2 << " and " << 3;

// Output
// 2 and 3
```

## Syntax

Let's learn about the different elements of a C++ program.

Let's take this example code:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 12 + 7;
}
```

1. `#include <iostream>`: This line is including the contents of the iostream library. This library is necessary for input and output operations in C++. Think of it like giving your program the ability to speak and listen.

2. `using namespace std;`: C++ has something called 'namespaces' which are used to organize code into logical groups. By stating using namespace std;, you're telling the program that you'll be using functions from std (standard) namespace.

3. `int main() { ... }`: This is the main function. Every C++ program must have a main function. This is the starting point of your program. When you run the program, the code inside the main function is what gets executed.

4. `cout << 12 + 7;`: We have already learned about this in a previous lesson.

This code, when run, will simply display 19 on the screen, which is the sum of 12 and 7.

5. `Curly Braces {}` : The opening curly brace { after main() indicate the start of main function. The closing cury braces } indicate the end of main function block.
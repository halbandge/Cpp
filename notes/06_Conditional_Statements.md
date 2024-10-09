## Need of If-Else

Many times our program needs to take different actions based on some conditions.

For example, Let's suppose we have to write a program that takes the user's age and tells us if we are old enough to vote or not. In this case our program will behave differently if the age entered by the user is below 18 and if the age is above 18.

If it is above 18, our program will print "Old enough to vote!". Otherwise, it will print "Not old enough to vote!".

This different behavior in the program can be achieved through something called "If/Else" Statements in C++.

An "if statement" is written by using the 'if' keyword.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    if ( a > b ) {
        cout << "Coding is Fun!";
    }
}
```

## Curly Braces

You might have noticed the '{' before and after cout in the previous problem. \
This '{' is what is known as curly bracket. \
C++ relies on curly brackets ('{' in the beginning and '}' at the end) to know what part of code is inside the if part of the code and what is not. Whatever is inside curly brackets is considered as one block of code. \
When writing an if or else if you don't mention a block of code using curly brackets it executes only the first statement of the if or else section.

## If & Else Statements

if and else can be used together to create conditions.
There are multiple operators which can be used in conditional statements.

- Equal to '=='
- Not Equal '!='
- Greater than '>'
- Less than '<'
- Greater than or equal to '>='
- Less than or equal to '<='

The syntax for if/else is:

```cpp
if(condition){
    //code to be executed if the condition is true
}
else {
    //code to be executed if the condition is false
}
```

## Else if Statement

The 'else if' keyword means "if the previous conditions were not true, then try this condition"

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int r;
  int b;
  cin >> r >> b;
  if (r > b) {
    cout << "Rob Scored higher marks than Bob" << endl;
  } else if (r == b) {
    cout << "Bob & Rob both scored the same" << endl;
  }
}
```


## Else Statement

The 'else' keyword includes anything which isn't included in the previous conditions.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int r;
    int k;
    cin >> r;
    cin >> k;
    if(r > k) {
        cout << "Ram is heavier than Karan." << endl;
    }
    else if(k > r) {
        cout << "Karan is heavier than Ram" << endl;
    }
    else {
        cout << "Ram & Karan have the same weight!" << endl;
    }
}
```

## Switch, Break and Default statement

We can use the switch statement to select one of many code blocks to be executed. \
We can use the break statement to end the execution of code at a specific point. \

The Syntax is as follows

```cpp
switch(expression) {
    case x:
      // code 
      break;
    case y:
      // code 
      break;
    default:
       // code 
    }
```

- The switch expression is evaluated once and the value of the expression is compared with the values of each case. If there is a match, the associated block of code is executed.
- When C++ reaches a break keyword, it breaks out of the switch block. This will stop the execution of more code and case testing inside the block.
- The default keyword specifies some code to run if there is no case match.

Code:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int day;
  cin>> day;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
}
```
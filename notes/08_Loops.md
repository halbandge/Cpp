## Loops

A loop in programming is like doing something over and over again until you're satisfied. You get to pick what you want to do and how many times you want to do it. It's like telling the computer, "Keep doing this until I say stop!"

Using loops makes things easier because instead of writing the same instructions multiple times, you can just tell the computer to repeat those instructions for you.

Imagine you want to print numbers from 1 to 10, each on a new line.

Without using a loop, you'd have to write 10 separate cout statements like this:

```cpp
cout<<1<<endl;
cout<<2<<endl;
cout<<3<<endl;
// And so on, until 10
```

But if you use loops, this can be done with just a single cout statement. We'll learn how to do this using different programming constructs in the upcoming lessons

## While Loop

Loops can execute a block of code as long as a specified condition is reached. \
They are handy because they save time, reduce errors, and they make code more readable. \
The while loop loops through a block of code as long as a specified condition is true:

Syntax:

```cpp
while (condition) {
    // code to be executed
}
```

## Do While Loop

The do/while loop is a type of while loop.
This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

Syntax

```cpp
do {
    // Code to be executed
}
while (condition); // The loop continues to iterate as long as the condition is true.
```

## For Loop 

When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

Syntax:

```cpp
for (statement 1; statement 2; statement 3) {
      // code block to be executed
    }
    // Statement 1 is executed (one time) before the execution of the code block.
    // Statement 2 defines the condition for executing the code block.
    // Statement 3 is executed (every time) after the code block has been executed.
```

Example:

```cpp
for (int i = 0; i < 5; i++) {
       cout << i << endl;
}
```

The for loop in code above does the following:

- It initializes the loop control variable i to 0.
- Before each iteration of the loop, condition (i < 5) is checked.
- Lastly, the loop control variable i is incremented by 1.

The output will be numbers starting from 0 to 4 (each on a new line).
## Taking User Input

You have already learnt that cout is used to output (print) values.
Now we will use cin to get user input.

cin is a predefined keyword that reads data from the keyboard with the extraction operator >>.

- cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
- cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

```cpp
int num;
cin >> num;
```

## Taking Multiple User Inputs

Similar to how we give multiple outputs, we can also take multiple inputs using the extraction operator(>>).

```cpp
int a, b;
cin >> a >> b;
cout << b << " " << a << endl;
```

In the above code we declare two variables a and b take input using cin and store the first input in a and the second input in b. Thus, for the input:

```cpp
2 3
```

the output will be:

```cpp
3 2
```
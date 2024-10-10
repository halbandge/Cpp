## Creating Arrays

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array,

- Define the variable type,
- Specify the name of the array followed by square brackets and
- Specify the number of elements it should store.

For example,

```cpp
string Cars[4] = {"Ferrari","Volvo","Lambo","Tesla"};
```

## Index & printing specific elements of an Array

You access an array element by referring to the index number inside square brackets [].

```cpp
       // 0    1     2    - index numbers
num[3] = {1 , 100 , 200};
cout << num[1];

// Output
// 100
```

Note - Indexing always starts from 0 starting from left to right.

## Changing the elements of an Array

To change the value of a specific element, we can refer to the index number.

For Example
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string mnts[4] = {"Jan", "Feb", " Dec", "Apr"};
  mnts[ 2 ] = "Mar";
  cout << mnts[2];

  
}
```

## Displaying the count of elements

To get the size of an array, you can use the sizeof() operator:

For e.g.

```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};
cout<<sizeof(myNumbers);
```

The output of above code will be 20. It is because the sizeof() operator returns the size of a type in bytes. int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

To get the number of elements in the array, you can use this code:

```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};
cout<<sizeof(myNumbers) / sizeof(myNumbers[0]);
```

The output of the above code will be: 5


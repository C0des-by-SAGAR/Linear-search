# Linear-search

This is a simple C program that allows you to search for an element within an array. It prompts the user to input the number of elements in the array, the array elements, and the element to be searched. It then searches for the element in the array and displays its position if found, or a message indicating that the element was not found.

## Prerequisites
Before running this program, make sure you have a C compiler installed on your system. This code is written in C and uses the standard input/output functions.

## Getting Started
1. Open a text editor or integrated development environment (IDE) of your choice.
2. Copy and paste the provided code into a new C source file (e.g., `array_search.c`).

## Compilation
Compile the program using your C compiler. For example, if you are using GCC on the command line, you can compile it like this:

```bash
gcc array_search.c -o array_search
```

## Usage
Run the compiled program by executing the following command:

```bash
./array_search
```

## Program Explanation

1. The program starts by declaring two integer variables `num` and `n`, which will be used to store the element to be searched and the number of elements in the array, respectively.

2. It prompts the user to enter the number of elements in the array and reads this value into the variable `n` using `scanf`.

3. An integer array `arr` of size `n` is declared to store the elements of the array.

4. The program then prompts the user to enter the elements of the array one by one and stores them in the `arr` array using a `for` loop.

5. After reading all the elements of the array, the program asks the user to enter the element they want to search for and stores it in the variable `num`.

6. The program initializes a flag variable `f` to 0, which will be used to check whether the element is found or not.

7. It then uses another `for` loop to iterate through the elements of the array and compares each element with the target element `num`. If a match is found, it prints the position (index) of the element and breaks out of the loop. If no match is found, the flag `f` is incremented.

8. After the loop, the program checks the value of `f`. If `f` is equal to `n`, it means that the element was not found in the array, and it prints "Item not found."

9. The program waits for a key press using `getch()` (a function from the `<conio.h>` library) before exiting.

## Example
Here's an example of how the program might run:

```
Enter the number of elements of the array: 5
Enter the elements of Array:
A[0]= 10
A[1]= 20
A[2]= 30
A[3]= 40
A[4]= 50
Enter the element to be searched: 30
Item found at position 2 !!
```

In this example, the user input an array with elements [10, 20, 30, 40, 50] and searched for the element 30, which was found at position 2 (0-based index).

## License
This program is provided under the MIT License. Feel free to use and modify it as needed for your projects.

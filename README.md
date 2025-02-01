# REVERSED ARRAY GENERATOR
Description
The Reversed Array Generator is a C program that allows users to input a series of integers into an array and then reverses the order of the elements in that array. The program utilizes a function to perform the reversal and displays the reversed array to the user.

Features
Prompts the user to enter the size of the array.
Allows the user to input integers into the array.
Reverses the order of the elements in the array using a separate function.
Displays the reversed array to the user.
How It Works
The program starts by displaying a welcome message.
It prompts the user to enter the size of the array and reads the input.
The program then allocates an array of the specified size and prompts the user to enter each element of the array.
The reversearray function is called, which:
Initializes two pointers: start at the beginning of the array and end at the last element.
Swaps the elements at the start and end indices until the pointers meet in the middle.
After the reversal is complete, the program prints the reversed array.

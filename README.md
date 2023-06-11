# Function Pointers - Euclidean Distance and Area Calculation

This repository contains a C program that showcases the application of function pointers. The program includes a function that calculates the Euclidean distance between two points and another function that calculates the area of a circle based on the radius distance between two points.

## Prerequisites

Make sure you have a C compiler installed on your system. For example, you can use GCC (GNU Compiler Collection) on Linux or MinGW on Windows.

## Instructions

1. Clone this repository to your local machine using the following command:
git clone https://github.com/SinghIsWriting/Application-of-Function-Pointer.git

2. Navigate to the cloned repository directory.
3. Compile the C program using your preferred C compiler. For example, with GCC:
gcc main.c -o function_pointer_app

4. Run the compiled program:
./function_pointer_app

5. The program will demonstrate the use of function pointers to calculate the Euclidean distance and area based on radius distance.

6. The program will display the results of the calculations on the console.

7. Feel free to explore the code in the repository and modify it according to your needs. You can experiment with different inputs and functions to see the behavior of function pointers.

## Program Details

The `main.c` file contains a program that demonstrates the application of function pointers.

The program includes two functions:

- `euclidian_distance` calculates the Euclidean distance between two points based on their coordinates. It takes four integers as input (x1, y1, x2, y2) and returns the Euclidean distance between the points.

- `areaOfCircle` calculates the area of a circle based on the radius distance between two points. It takes a function pointer as input, which points to the `euclidian_distance` function, and four integers (x1, y1, x2, y2) representing the coordinates of the points. It returns the area of the circle based on the radius distance.

The program demonstrates how function pointers can be used to pass functions as arguments to other functions. By using function pointers, we can dynamically change the behavior of functions and perform different calculations based on the desired functionality.

Feel free to explore the code in the repository and modify it according to your needs.

Happy coding!

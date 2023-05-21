# Binary Search Tree (BST) Implementation

This is a simple implementation of a Binary Search Tree (BST) in C. The program allows you to insert numbers into the BST, check if a number is present in the tree, find the minimum and maximum values in the tree, and perform depth-first and breadth-first traversals of the tree.

## Getting Started

To compile and run the program, follow these steps:

1. Make sure you have a C compiler installed on your system (e.g., GCC).
2. Clone this repository to your local machine or download the source code files.
3. Open a terminal or command prompt and navigate to the project directory.
4. Run the following command to compile the program:
gcc main.c -o bst
5. After successful compilation, run the program using the following command:
./bst
## Usage

The program demonstrates various operations on a BST. Upon running the program, it will perform the following tasks:

1. Insert the numbers 5, 3, 7, 8, 2, 4, 1, 9, 6, and 10 into the BST.
2. Check if the number 3 is present in the tree.
3. Find the minimum and maximum values in the tree.
4. Perform depth-first traversals in pre-order, post-order, and in-order.
5. Perform breadth-first traversal.

## Example Output

Here is an example output you might see when running the program:
Tree is containing the TRUE
Minimum value of the Tree: 1
Maximum value of the Tree: 10
Depth First Search Pre Order: 5 3 2 1 4 7 6 8 9 10
Depth First Search Post Order: 1 2 4 3 6 10 9 8 7 5
Depth First Search In Order: 1 2 3 4 5 6 7 8 9 10
Breadth First Search: 5 3 7 2 4 8 1 6 9 10

## License

This project is licensed under the [MIT License](LICENSE).

# Pyramid.c
  In this program:
1. The `printPyramid` function takes the number of rows as a parameter and prints the pyramid pattern.
2. It uses nested `for` loops to iterate over the rows and columns of the pattern.
3. The outer loop (`i`) iterates from 1 to the total number of rows.
4. The first inner loop (`space`) is used to print the appropriate number of spaces before each row to create the pyramid shape.
5. The second inner loop (`j`) is used to print the asterisks (`*`). The number of asterisks in each row is calculated using the formula `2 * i - 1`.
6. After printing each row, a newline character (`\n`) is printed to move to the next line.
7. In the `main` function, the user is prompted to enter the number of rows for the pyramid pattern using `printf` and `scanf`.
8. The `printPyramid` function is called with the provided number of rows to print the pyramid pattern.
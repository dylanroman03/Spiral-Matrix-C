# Spiral Matrix Generation

The following program generates matrices in a clockwise spiral pattern based on user input for the size and corner values. It consists of three main components: the `caracolMatrix` function, the `checkRange` function, and the `main` function. This project is a homework realized for `Compu I` 

## caracolMatrix Function

The `caracolMatrix` function takes two parameters, `n` and `corner`, and generates a matrix in a clockwise spiral pattern.

### Parameters
- `n`: An integer representing the size of the matrix.
- `corner`: An integer representing the starting corner of the matrix (values 1-4).

### Algorithm
1. Initialize the `matrix` array with zeros.
2. Set the initial values of `e`, `x`, and `y` based on the `corner` parameter.
3. Set the initial `step` value based on the current direction.
4. Iterate `i` from 1 to `n * n`:
   - Set the value of `matrix[e]` to `i`.
   - If the next element (`matrix[e + step]`) is zero and the current position `x` is less than `n`, move to the next element in the current direction.
   - Otherwise, update the direction (`y`) and the step value (`step`) based on the next direction.
   - Move to the next element in the updated direction.
5. Print the elements of the `matrix` array in a tabular form, with each row separated by a newline.

## checkRange Function

The `checkRange` function checks if the given values `n` and `a` are within specified ranges.

### Parameters
- `n`: An integer representing the size of the matrix.
- `a`: An integer representing the corner value.

### Return Value
- `1` if both `n` and `a` are within the specified ranges.
- `0` otherwise.

## main Function

The `main` function is the entry point of the program. It handles user input, validation, and calling the necessary functions to generate and print the matrices.

### Algorithm
1. Read the value of `size` from the user.
2. Initialize the `nMatrix` and `cornerMatrix` arrays to store the sizes and corner values, respectively.
3. Iterate `i` from 0 to `size - 1`:
   - Read the values of `n` and `corner` from the user and validate them using the `checkRange` function.
   - If the values are not valid, prompt the user to enter correct values.
   - Store the valid values in the `nMatrix` and `cornerMatrix` arrays.
4. Iterate `i` from 0 to `size - 1`:
   - Call the `caracolMatrix` function with the corresponding size and corner values from the arrays.
   - Print three newline characters to separate the matrices.

---

This program allows users to generate matrices in a clockwise spiral pattern by providing the size and corner values. The `caracolMatrix` function implements the spiral pattern algorithm, while the `checkRange` function validates the input ranges. The `main` function handles user input, validation, and calls the necessary functions to generate and print the matrices.

# Arrays-Strings
<br>
<p align='center'><b> Experiment 7A </b></p>

## Aim

To demonstrate how to initialize an array and display its elements in C++.

## Software Used
- Dev C++

## Theory
<p>Arrays in C++ are used to store multiple values of the same type in a single variable, instead of declaring separate variables for each value. An array is a collection of variables that are accessed with an index number.</p>

### Array Initialization

<p>An array can be initialized with predefined values at the time of declaration. The elements in the array are stored in contiguous memory locations, and each element can be accessed using an index.</p>

### Syntax 

```cpp
data_type array_name[array_size];
```
### Array Traversal

<p>Traversing an array involves accessing each element of the array sequentially. This can be done using loops such as for or while loops.</p>

## Algorithm

Step 1: Start.
<br>
Step 2: Declare and initialize an array arr with 5 elements: {1, 2, 3, 4, 5}.
<br>
Step 3: Use a loop to traverse the array from the first element to the last.
<br>
Step 4: Print each element of the array.
<br>
Step 5: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/e52c3fe9-7985-447c-b5bc-86e9c0992a3c)

## Conclusion

This program successfully demonstrates the initialization and traversal of an array in C++. The elements of the array are displayed sequentially as expected.

<br>
<p align='center'><b> Experiment 7B </b></p>

## Aim

To input elements into an array and display them.

## Software Used
- Dev C++

## Theory

<p>Arrays are used to store multiple values of the same type in a single variable. This program demonstrates how to input values into an array from the user and then display these values. The array elements are accessed sequentially using a loop.</p>

### Array Input and Output

1. <b>Input</b>: The user is prompted to enter values for each element of the array.
<br>
2. <b>Output</b>: The program displays each element of the array in the order they were inputted.

## Algorithm

Step 1: Start.
<br>
Step 2: Declare an integer variable size and read the size of the array from the user.
<br>
Step 3: Declare an array arr of size size.
<br>
Step 4: Use a loop to read size number of elements into the array.
<br>
Step 5: Use another loop to display the elements of the array.
<br>
Step 6: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/1433b6fb-f1c1-46d4-ba05-0b3924ae80f3)

## Conclusion

<p>The program effectively demonstrates how to input a specified number of elements into an array and display those elements. It illustrates the basic usage of loops for both input and output operations in C++.</p>

<br>
<p align='center'><b> Experiment 7C </b></p>

## Aim

To find and display the maximum and minimum values in an array of integers.

## Software Used
- Dev C++

## Theory

An array in C++ is a collection of variables of the same type stored in contiguous memory locations. To find the maximum and minimum values in an array, we need to traverse the array while keeping track of the largest and smallest values encountered.

### Array Traversal

To determine the maximum and minimum values, iterate through each element of the array and compare each element with the current maximum and minimum values. Update the maximum or minimum as needed.

## Algorithm

Step 1: Start.
<br>
Step 2: Declare an integer variable size and read the size of the array from the user.
<br>
Step 3: Declare an array arr of size size.
<br>
Step 4: Read size number of elements into the array.
<br>
Step 5: Initialize max and min with the first element of the array.
<br>
Step 6: Traverse the array and update max and min based on comparisons.
<br>
Step 7: Display the maximum and minimum values.
<br>
Step 8: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/1f96e23a-17c1-4382-a9fc-d71aac524fd8)

## Conclusion

The program successfully identifies and displays the maximum and minimum values in an array by traversing the array and comparing each element. This approach efficiently finds the desired values.

# String

<br>
<p align='center'><b> Experiment 7F </b></p>

## Aim

To write a C++ program that displays a string.

## Software Used
- Dev C++

## Theory
<p>In C++, a string can be represented as a character array or by using the std::string class. In this experiment, a character array is used to store and display the string. The cout statement is used to output the string to the console.</p>

## Algorithm

Step 1: Start.
<br>
Step 2: Declare and initialize a character array with the string "Otniel".
<br>
Step 3: Use the cout statement to display the string.
<br>
Step 4: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/2e629cbc-f8d9-4e9b-8076-b4ac29a5967d)

## Conclusion

The program successfully displays the string "Otniel" on the screen. This simple program demonstrates how to use character arrays in C++ to store and display text.


<br>
<p align='center'><b> Experiment 7G </b></p>

## Aim

To write a C++ program that displays a string.

## Software Used
- Dev C++

## Theory
<p>In C++, strings are objects that represent sequences of characters. The C++ Standard Library provides the std::string class, which supports various operations like concatenation. Concatenating two strings means appending the second string to the end of the first string, creating a new string that combines the content of both.</p>

### String Concatenation
<p>String concatenation in C++ can be done using the '+' operator, which merges two strings into a new string.</p>

## Algorithm

Step 1: Start.
<br>
Step 2: Declare two 'std::string' variables 'str1' and 'str2' to hold the user inputs.
<br>
Step 3: Declare another 'std::string' variable 'newstr' to store the concatenated result.
<br>
Step 4: Prompt the user to enter the first string and store it in 'str1'.
<br>
Step 5: Prompt the user to enter the second string and store it in 'str2'.
<br>
Step 6: Concatenate 'str1' and 'str2' using the '+' operator and store the result in 'newstr'.
<br>
Step 7: Display the concatenated string 'newstr'.
<br>
Step 8: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/e02df0b7-6e85-406d-a180-3d175f40da94)

## Conclusion

The program successfully concatenates two user-provided strings and displays the result. The '+' operator in C++ efficiently combines the strings into a new string, demonstrating a fundamental operation on string objects.


<br>
<p align='center'><b> Experiment 7H </b></p>

## Aim

To reverse and display a string provided by the user.


## Software Used

- Dev C++
  
## Theory

<p>In C++, a 'std::string' represents a sequence of characters. Reversing a string involves printing the characters of the string in reverse order. This can be achieved by iterating from the end of the string to the beginning.</p>

### String Reversal

<p>To reverse a string, we iterate from the last character to the first character of the string, printing each character in this order. This approach does not modify the original string but displays its reversed version.</p>


## Algorithm

Step 1: Start.
<br>
Step 2: Declare a 'std::string' variable 'word' to store the user input.
<br>
Step 3: Prompt the user to enter a string and read the input into 'word'.
<br>
Step 4: Determine the length of the string using 'word.length()'.
<br>
Step 5: Iterate from the last character to the first character of the string.
<br>
Step 6: Print each character during the iteration.
<br>
Step 7: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/a75c1071-cc8f-42a8-a20c-063967c56531)

## Conclusion

<p>The program successfully reverses and displays a user-provided string. Iterating through the string from end to start effectively demonstrates how to reverse a string in C++. This approach highlights the manipulation of string indices to achieve the desired output.</p>


<br>
<p align='center'><b> Experiment 7I </b></p>

## Aim
To determine whether a given string is a palindrome.

## Software Used
- Dev C++

## Theory
<p>A palindrome is a string that reads the same backward as forward. To check if a string is a palindrome, we compare characters from the beginning of the string with characters from the end, moving towards the center. If all corresponding characters match, the string is a palindrome.</p>

### Palindrome Check
<p>The palindrome check involves:
<br>
1. Comparing the first and last characters of the string.
 <br>
2. Moving inward and comparing each subsequent pair of characters.
  <br>
3. If any pair does not match, the string is not a palindrome.</p>
<br>

## Algorithm

Step 1: Start.
<br>
Step 2: Declare a 'std::string' variable 'str' to store the user input.
<br>
Step 3: Initialize a boolean variable 'isPalindrome' to 'true'.
<br>
Step 4: Prompt the user to enter a string and read the input into 'str'.
<br>
Step 5: Determine the length of the string using 'str.length()'.
<br>
Step 6: Iterate from the start of the string to the middle, comparing characters from the beginning and the end of the string.
<br>
Step 7: If any characters do not match, set isPalindrome to false and exit the loop.
<br>
Step 8: After the loop, check the value of isPalindrome: <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- If true, the string is a palindrome.  
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- If false, the string is not a palindrome.
<br>
Step 9: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/80e8560d-4876-4466-b096-9c47d2d11df0)

## Conclusion
The program accurately determines whether a given string is a palindrome by comparing characters from the start and end of the string. If all compared characters match, the string is identified as a palindrome; otherwise, it is not. This method efficiently checks for palindromes with a time complexity of O(n), where n is the length of the string.

# 2D Array

<br>
<p align='center'><b> Experiment 7J </b></p>

## Aim

To input a 2D array (matrix) and display its elements in a matrix format.

## Software Used
- Dev C++

## Theory
<p>A 2D array in C++ is essentially an array of arrays, where each element of the main array is another array. The 2D array can be visualized as a matrix with rows and columns. The elements are stored in contiguous memory locations, making it efficient for operations that involve row-wise or column-wise traversal.</p>

### 2D Array Input and Output

1. Input: The elements of the 2D array are taken row by row, where the user first specifies the number of rows and columns
<br>
2. Output: The elements are then displayed in a matrix format, maintaining the row and column structure.

## Algorithm

Step 1: Start.
<br>
Step 2:Declare two integer variables sizer and sizec to store the number of rows and columns, respectively.
<br>
Step 3:Prompt the user to enter the number of rows and store it in sizer.
<br>
Step 4:Prompt the user to enter the number of columns and store it in sizec.
<br>
Step 5:Declare a 2D array arr of size sizer by sizec.
<br>
Step 6:Use nested loops to input the elements of the 2D array:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Outer loop for rows.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Inner loop for columns.
<br>
Step 7:Use nested loops to display the elements of the 2D array in a matrix format:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Outer loop for rows.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Inner loop for columns.
<br>
Step 8:End.
<br>

## Output

![image](https://github.com/user-attachments/assets/95265f48-153f-4556-a7c9-c66cb51172f5)

## Conclusion

The program successfully takes input for a 2D array (matrix) and displays it in a matrix format.


<br>
<p align='center'><b> Experiment 7K </b></p>

## Aim

To input two matrices of the same size and display their sum.

## Software Used
- Dev C++

## Theory
<p>
  A matrix is a two-dimensional array of numbers arranged in rows and columns. The sum of two matrices is obtained by adding the corresponding elements of each matrix. Matrix addition is only possible when both matrices have the same dimensions (i.e., the same number of rows and columns).
</p>

## Algorithm

Step 1: Start.
<br>
Step 2: Declare variables sizer, sizec, sizer1, and sizec2 to store the number of rows and columns of the matrices.
<br>
Step 3: Prompt the user to enter the number of rows and columns for the first matrix and store them in sizer and sizec.
<br>
Step 4: Declare a 2D array arr of size sizer by sizec to store the elements of the first matrix.
<br>
Step 5: Prompt the user to input the elements of the first matrix.
<br>
Step 6: Prompt the user to enter the number of rows and columns for the second matrix and store them in sizer1 and sizec2.
<br>
Step 7: Declare a 2D array arr2 of size sizer1 by sizec2 to store the elements of the second matrix.
<br>
Step 8: Prompt the user to input the elements of the second matrix.
<br>
Step 9: Check if the sizes of the matrices are the same:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;If they are the same, proceed with the addition.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;If not, display a message that the sizes should be the same for addition.
<br>
Step 10:For each element in the matrices, calculate the sum of the corresponding elements and store the result in a new matrix sum.
<br>
Step 11:Display the sum matrix.
<br>
Step 12:End.
<br>

## Output

![image](https://github.com/user-attachments/assets/4aa9ec53-5a9f-4a32-b407-cf042dd02178)



## Conclusion

The program successfully adds two matrices of the same size and displays the result. 

<br>
<p align='center'><b> Experiment 7L </b></p>

## Aim

To perform matrix multiplication of two matrices and display the result.

## Software Used
- Dev C++

## Theory
<p>
  Matrix multiplication involves computing the dot product of rows of the first matrix with columns of the second matrix. The number of columns in the first matrix must match the number of rows in the second matrix for multiplication to be possible. The resulting matrix has dimensions that correspond to the number of rows of the first matrix and the number of columns of the second matrix.
</p>

## Algorithm

Step 1: Start.
<br>
Step 2: Declare variables rowsA, colsA, rowsB, and colsB to store the number of rows and columns of the matrices.
<br>
Step 3: Prompt the user to enter the number of rows and columns for Matrix A and store them in rowsA and colsA.
<br>
Step 4: Prompt the user to enter the number of rows and columns for Matrix B and store them in rowsB and colsB.
<br>
Step 5: Check matrix dimensions:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;If the number of columns in Matrix A (colsA) is not equal to the number of rows in Matrix B (rowsB), output an error message indicating that matrix multiplication is not possible and exit the program.
<br>
Step 6: Declare 2D arrays A and B for storing Matrix A and Matrix B, and C for storing the result of the multiplication.
<br>
Step 7: Prompt the user to input the elements of Matrix A.
<br>
Step 8: Prompt the user to input the elements of Matrix B.
<br>
Step 9: Initialize the result matrix C to zero.
<br>
Step 10: Perform matrix multiplication:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;For each element in the result matrix C, compute the sum of products of corresponding elements from the rows of Matrix A and the columns of Matrix B.
<br>
Step 11: Display the result matrix.
<br>
Step 12: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/1678b4c5-03c7-4c21-9f1e-802550ddce8f)

## Conclusion

This program successfully demonstrates matrix multiplication, a fundamental operation in linear algebra.

<br>
<p align='center'><b> Experiment 7M </b></p>

## Aim

To calculate the sum of the forward (main) diagonal and the reverse diagonal elements of a square matrix.

## Software Used
- Dev C++

## Theory
<p>
  In matrix operations, a diagonal consists of elements where the row and column indices are equal. The reverse diagonal (also known as the anti-diagonal) consists of elements where the row index plus the column index equals n-1, where n is the size of the matrix. This program computes the sum of both the forward and reverse diagonals for a square matrix.
</p>

## Algorithm

Step 1: Start. 
<br> 
Step 2: Prompt the user to enter the number of rows and columns for the matrix. 
<br>
Step 3: Check if the matrix is square (i.e., the number of rows equals the number of columns). If not, display an error message and terminate.
<br> 
Step 4: Declare a 2D array to store the matrix elements. 
<br> 
Step 5: Populate the matrix by reading elements from the user. 
<br> 
Step 6: Initialize variables to store the sums of the forward diagonal and reverse diagonal elements.
<br> 
Step 7: Traverse the matrix:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;For the forward diagonal, sum the elements where the row and column indices are equal.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;For the reverse diagonal, sum the elements where the row index plus the column index equals n-1. 
<br>
Step 8: Display the matrix and the calculated sums of both diagonals. 
<br> 
Step 9: End. 
<br>

## Output

![image](https://github.com/user-attachments/assets/102dcf50-0831-4a65-9a87-20a64649dbee)

## Conclusion

<p>
  The program successfully calculates both the forward and reverse diagonal sums of a square matrix by iterating through the matrix and summing the respective diagonal elements. This method can be extended to square matrices of any size.
</p>

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

<br>
<p align='center'><b> Experiment 7D </b></p>

## Aim

To search for a specific key in an array of integers and determine its position.

## Software Used
- Dev C++

## Theory

<p>Arrays in C++ are used to store a fixed-size sequential collection of elements of the same type. Searching for an element in an array involves comparing each element with the key until the key is found or all elements have been checked.</p>

### Key Search

<p>The program asks the user to input an array of integers and then searches for a specific integer key in that array. If the key is found, the program returns the index of the key. If not, it indicates that the key is not present in the array.</p>

## Algorithm

Step 1: Start.
<br>
Step 2: Declare a constant integer maxSize as 18.
<br>
Step 3: Declare an integer array arr of size maxSize.
<br>
Step 4: Declare integer variables size and key, and a boolean found initialized to false.
<br>
Step 5: Ask the user to input the size of the array, ensuring it does not exceed maxSize.
<br>
Step 6: Input size elements into the array.
<br>
Step 7: Ask the user to input the key to search for.
<br>
Step 8: Traverse the array to search for the key.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; If the key is found, output the index and set found to true.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; If the key is not found after the loop, output "Key not found."
<br>
Step 9: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/2c425860-edb5-42e3-9424-4060b6be0abe)

## Conclusion

<p>The program effectively demonstrates how to input a specified number of elements into an array and display those elements. It illustrates the basic usage of loops for both input and output operations in C++.</p>

<br>
<p align='center'><b> Experiment 7E </b></p>

## Aim

To calculate the sum and average of elements in an array of integers.

## Software Used
- Dev C++

## Theory

Arrays in C++ are used to store multiple values of the same data type. The sum of an array can be found by iterating through the array and adding each element to a running total. The average is then calculated by dividing the sum by the number of elements in the array.

## Algorithm

Step 1: Start.
<br>
Step 2: Declare an integer variable size to store the number of elements in the array.
<br>
Step 3: Prompt the user to enter the size of the array.
<br>
Step 4: Declare an integer array arr of size size and an integer variable sum initialized to 0.
<br>
Step 5: Loop through the array to input elements and add each element to sum.
<br>
Step 6: Calculate the average by dividing sum by size.
<br>
Step 7: Output the sum and the average of the array elements.
<br>
Step 8: End.
<br>

## Output

![image](https://github.com/user-attachments/assets/96bbe307-aa1a-4271-93ae-2ea9cc9ffcfd)

## Conclusion

<p>The program successfully calculates the sum and average of array elements. The sum is computed by adding all the elements, and the average is derived by dividing the sum by the total number of elements. This program demonstrates the basic concepts of array manipulation in C++.</p>



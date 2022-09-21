<h1> DAA - Class Assignment </h1>

Name: Rohit Bhojwani <br>
Roll No.: 57 <br>
Semester: 5th <br>
Section: A <br>
<hr>

<h3>Problem Statement: <h3>

<u>Accept a One dimensional array using random number generator. The array may be in the range of [0,1,2] [Only three numbers are permitted]
Scan the array and print "X" if number "0" is more than number of "1" and "2". Print "Y" if number of "1" are more than "0" and "2" Print "Z" if number of "2" are more than "0" and "1".
Expected complexity O(log n) </u>
<hr>

Approach: 

We used thr "rand%3" function to generate random input of the given size which contains [0,1,2] only. Then we sorted the given array as the expected complexity was O(logn) which could be achieved only when the array is sorted. We then used the Binary Search meathod to count the index till which 0,1 and 2 are in the array so that we could count the size of 0, 1 and 2. After getting the size of the numbers, we compared the size in the if-else statement and printed the resukt. 

<hr>

Test Cases

Enter the number of testcases: 4

Enter the size of the Array: 12
The Sorted Array is:         
0 0 0 1 1 1 1 2 2 2 2 2      
Number of zero's are: 3      
Number of one's are: 4       
Number of two's are: 5       

Result: Z

<hr>

Enter the size of the Array: 10 <br>
The Sorted Array is: <br>
0 0 0 1 1 1 1 1 2 2 <br>
Number of zero's are: 3 <br>
Number of one's are: 5 <br>
Number of two's are: 2 <br>

Result: Y

<hr>

Enter the size of the Array: 5 <br>
The Sorted Array is: <br>
0 0 0 1 2 <br>
Number of zero's are: 3 <br>
Number of one's are: 1 <br>
Number of two's are: 1 <br>

Result: X

<hr>

Enter the size of the Array: 15 <br>
The Sorted Array is: <br>
0 0 0 0 0 1 1 1 1 1 2 2 2 2 2  <br>
Number of zero's are: 5 <br>
Number of one's are: 5 <br>
Number of two's are: 5 <br>

Result: The count for 0, 1 and 2 are same.



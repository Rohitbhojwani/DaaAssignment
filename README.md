# Daa Assignment

Name: Rohit Bhojwani

Roll No.: 57

Semester: 5th

Section: A


Problem Statement:

Accept a One dimensional array using random number generator. The array may be in the range of [0,1,2] [Only three numbers are permitted]
Scan the array and print "X" if number "0" is more than number of "1" and "2". Print "Y" if number of "1" are more than "0" and "2" Print "Z" if number of "2" are more than "0" and "1".
Expected complexity O(log n)


Approach: 

We used thr "rand%3" function to generate random input of the given size which contains [0,1,2] only. Then we sorted the given array as the expected complexity was O(logn) which could be achieved only when the array is sorted. We then used the Binary Search meathod to count the index till which 0,1 and 2 are in the array so that we could count the size of 0, 1 and 2. After getting the size of the numbers, we compared the size in the if-else statement and printed the resukt. 

Below is a screenshot attached to see the valid input and output:





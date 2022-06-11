//Find the repeating and the missing | Added 3 new methods
/*Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

Examples: 

 Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 
2 is missing and 3 occurs twice 

Input: arr[] = {4, 3, 6, 2, 1, 1}
Output: Missing = 5, Repeating = 1
Below are various methods to solve the problems: 

Method 1 (Use Sorting)
Approach: 

Sort the input array.
Traverse the array and check for missing and repeating.
Time Complexity: O(nLogn)


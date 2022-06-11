/*Insertion Sort
Insertion Sort is an In-Place sorting algorithm. This algorithm works in a similar way of sorting a deck of playing cards.

The idea is to start iterating from the second element of array till last element and for every element insert at its correct position in the subarray before it.*/
                  algorithm for insertion sort
/*
Step 1: If the current element is 1st element of array, 
        it is already sorted.
Step 2: Pick next element
Step 3: Compare the current element will all elements 
        in the sorted sub-array before it.
Step 4: Shift all of the elements in the sub-array before 
        the current element which are greater than the current 
        element by one place and insert the current element 
        at the new empty space.
Step 5: Repeat step 2-3 until the entire array is sorted.*/

                  another example
arr[] = {12, 11, 13, 5, 6}

Let us loop for i = 1 (second element of the array) to 4 (Size of input array - 1).
 1) i = 1, Since 11 is smaller than 12, move 12 and insert 11 before 12.
11, 12, 13, 5, 6
 2) i = 2, 13 will remain at its position as all elements in A[0..I-1] are smaller than 13
11, 12, 13, 5, 6
 3)i = 3, 5 will move to the beginning and all other elements from 11 to 13 will move one position ahead of their current position.
5, 11, 12, 13, 6
 4)i = 4, 6 will move to position after 5, and elements from 11 to 13 will move one position ahead of their current position.
5, 6, 11, 12, 13

Time Complexity: O(N2), where N is the size of the array.

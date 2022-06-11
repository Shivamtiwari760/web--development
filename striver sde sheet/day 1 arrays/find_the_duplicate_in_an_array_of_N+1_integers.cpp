//find the duplicate in an array of N+1 integers
/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.
Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [1,1]
Output: 1
Example 4:

Input: nums = [1,1,2]
Output: 1
 

Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.
/*
 the naive approach to solve the element si to sort the array, when you will sot the array u can linearly traverse through the array and there is a certain point where the value at index [i] will be equal to the value at index [i+1], because you are sorting the arrays so the duplicate arrays will be together in the array hence you can easily find the duplicate number hence this method will take, 
time complexity = O(NlogN) and it will take an extra space of O(1), so it will distort the array

now we will be optimizing our solution by using hashing, here we need  to create the frequency array of simillar size and all initialized with zero and we linearly traverse in the given array
example array = {2,5,9,6,9,3,8,9,7,1}
initially we have 2 so we update 2 as one , next time we have 5 so we update 5 as one, next time we have updated 6 as 1 but when again we are moved we see 9 but it is already having one, this actually tells use this 9 has already found in the array, so which gives us our duplicate element as 9.
so the time complexity = O(N)
space complexity=O(N) so we improved on the time complexity but we have increased the space complexity 
optimal solution uses the linked list cycle method 
example array = {2,5,9,6,9,3,8,9,7,1} here indexing start from 0.
initially we have two so we go the 0 element there is 2 so we go the 2 nd element and there is 9 and then we go to the 9th element there is 1 then we go to the index 1 there is 5 then we go the 5 index there is 3 then we go to the index 3 there is 6 then we go the index 6 then here is 8 then we go to the 8th element there is there is 7 then we go to the 7th element there is 9 .
after making the cycle we are gonna use the tortoise method , this method is going to take two pointers, one is slow pointer and the other one is fast pointer, here the slow pointer always moves one step and the fast pointer will always move two step.
initially the slow pointer will move to 9 and the fast pointer will move to 1, after that the slow pointer will move to 1 and the fast pointer will move to the 3, after doing certain steps there is a point at 7 where your fast and slow pointer colloids, here we stop moving after that we are gonna take the fast pointer and, then we take the fast pointer and place it one th first number and then we  will perform tortoise method adn we are gonna removing both the pointers simultaneously.
lastly we move the fast pointer by point and the slow pointer by one point, and the pointer where they colloid is the duplicate number, then we can easily say that 9 is the duplicate number, when there is duplicate number there is always an cycle.
when slow will move one point and fast will move two point there is definitely the collsion occurs.
now lets find the second collsion by moving the slow pointer by 1 and the fast pointer by 1
time complexity is =O(n)
space complexity =O(1).
code:-
class solution
{
    public:
    int findDuplicate(vector<int> $nums)
    {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];(here we move the slow pointer bny one)
            fast=nums[nums[fast]]; (and here we move the fast pointer by two)
        }while(slow!=fast)( here we do while loop we move slow pointer by 1 and the fact pointer by 2 unless they meet and I know they are bound to meet so after they meet)
        fast=nums[0];( after that we move the fast pointer at first position, and we leave the slow pointer where it was)
        while(slow!=fast)(and after that I start moving the slow and fast pointer, unless and until they meet)
        {
            slow=nums[slow];(here I am moving the slow pointer by 1)
            fast=nums[fast];( here also I am moving the fast pointer by 1)
        }
        return slow;(and whether they meet I know either slow and fast is my answer)
    }
}
*/


//final best solution as mentioned above
/*
    Problem Link: https://leetcode.com/problems/find-the-duplicate-number/
*/

class Solution
{
public:
    // tortoise and hare approach to cycle detection
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0], fast = nums[0];
        // use do while to run first time even when fast = slow. while will simply break @ start
        // and do while will run any code min 1 time irrespective of condition
        do
        {
            slow = nums[slow];       // 1 step
            fast = nums[nums[fast]]; // 2 steps
        } while (slow != fast);      
        // cycle is detected: move fast to the head
        fast = nums[0];
        // move 1 step each
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        // value where cycle occurs: duplicate element
        return slow; // return fast;
    }
};
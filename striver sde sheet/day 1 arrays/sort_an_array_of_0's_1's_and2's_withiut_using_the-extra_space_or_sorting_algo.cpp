//sort an arrays of 0's , 1's and 2's without using extra space or sorting algorithms
/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
Example 3:

Input: nums = [0]
Output: [0]
Example 4:

Input: nums = [1]
Output: [1]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is 0, 1, or 2.
the bruthforce solution is the sorting of an array, the time complexity of such solution is O(NlogN), and the space complexity is O(1), in th next step
now we can optimise this by using the counting sort,  just linearly traverse through the array and just count the number of zeroes.
example arr ={0,1,1,0,1,2,1,2,0,0,0,1}
the number of zeroes are 5 and the number of 1's are 5 and the number of 2's are two, you can loop for five times and insert 5 zeroes at the first 5 index, after that you can run a loop for 5 times and insert the ones and then run a loop for 2 times and insert 2, after inserting all the elements the array will be sorted the time complexity
the time complexity o(N) for the first pass and the other o(N) when you fill up the zeroes, ones and two's, so the total is O(2N), it requires two passes
   

   optimal soultion-
   this problem is variation of dutch national flag algorithm, so in the algorithm u need to consider three pointers one is the low pointer, other one is the mid pointer and the last one is the high pointer.
   example arr ={0,1,1,0,1,2,1,2,0,0,0,1}
   and initially you will place the low pointer at the start, and he mid pointer at the start and the high pointer at the last position, this algorithm will be based on the fact that all the numbers from [0 to low-1] are zeroes while all the numbers for [high+1 to n] are two.
   [0-low-1]=0;
   [high+1 - n]=2;
   it means, all the elemets towards the left side of i are zero and all the elements from the right side of i are 2, so we will be moving the mid pointer until and unless this mid pointer crosses the high pointer, while moving we will be having three checks
   1) one is when mid  pointer is pointing to a zero
   2) when the mid pinter is pointing to one
   3) while the other one is when the mid pointer pointing to the two
   so lets start traversing, so thr first time the mid pointer pointing to the zero, wen it points to zero what we are gonna do is, we are gonna swap the values at index low with  the value at index mid(a[low],a[mid])
   as of now there are already at the same index so swapping will not matter and after this wwe move the left pointer by one and we also move the mid pointer by one, so the next time we will se the the mid pointer is pointing to one we will simply move the mid poiter by one, now the mid pointer again points to one, we we will be moving the mid pointer by one position, so if you carefully notice the initial assumption, that all the elements towards the left side fo low is zero that is actually true, so now mid points zero , whenever it is zero we will be swapping a[low]  and a[mid], so after swapping the arrays will look like this
   arr ={0,0,1,1,1,2,1,2,0,0,0,1}
   and then low moves one position ahead and the mid also move sone position ahead, as ou can see the first assumption that we took that all the elements towards the left will be zero is still true and at the net step we see that mid is one, so we ove the poiter mid by one, so the next index we can see that the mid pointer points to two, so whenever we get two we wil be swapping the elements with the mid pointer and the element at high pointer so they will swap with each other , once you will be sort youare not moving the mid pointer, you will be just moving the high pointer, so u have seen all the threee conditions have been covered and also our assumption that we took during the start that all the elements towards the right of the high will be two is still valid
    this algorithm will take time complexity of o(N)
    space complexity O(1).
    code:
    */
   // striver solution
    class solution
    {
       public:
       void sortcolors(vector<int> &nums)
       {
          int low=0;
          int mid=0;
          int high=nums.size()-1;
          while(mid<=high)
          {
             switch(nums[mid])
             {
                // if the element is zero
                case 0:
                swap(nums[low++],nums[high++]);
                break;
                // if the element is one
                case 1:
                mid++;
                // if the element is two
                case 2:
                swap(nums[mid],nums[high--]);
                break;

             }
          }
       }

    };



    //  alternating solution with same space and time complexity inspite of using the switch statement i have used he if else statement
    /*
    problem link: https://leetcode.com/problems/sort-colors/
*/

    class Solution
    {
    public:
       void sortColors(vector<int> &nums)
       {
          // use DNF sort
          // region of 0s{0, low}, region of 1s{low, mid}, region of 2s{high, n - 1}
          // uncertain region or unsorted region{mid, high}.
          // we need to shrink this region{mid, high}.
          int n = nums.size();
          int low = 0, mid = 0, high = n - 1;
          while (mid <= high)
          {
             if (nums[mid] == 0)
                swap(nums[mid++], nums[low++]);
             else if (nums[mid] == 1)
                mid++;
             else
                swap(nums[mid], nums[high--]);
          }
       }
    };

    //same solution just change the arr from nums to array with same size and space complexity
    class Solution
    {
    public:
       void sortColors(vector<int> &arr)
       {
          int n = arr.size();
          int low = 0;
          int mid = 0;
          int high = n - 1;
          while (mid <= high)
          {
             if (arr[mid] == 0)
                swap(arr[low++], arr[mid++]);
             else if (arr[mid] == 1)
                mid++;
             else
                swap(arr[mid], arr[high--]);
          }
       }
    };

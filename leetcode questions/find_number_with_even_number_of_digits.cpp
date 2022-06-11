//Find Numbers with Even Number of Digits
/*Problem Statement:
You are given an array of integers.
You need to return the count of the numbers that has even number of digits.

Example
 

Input arr = {12, 123, 1234, 12345, 123456}
Output: 3

The numbers {12, 1234, 123456} has even digits.
 

Solution
The solution is very simple.

Convert the number into string and then take the size of the string.
Then take modulo of the size with 2. If it is 0, then it is even and increment the count.
*/
#include<bits/stdc++.h>
using namespace std;
    int find_even_length_numbers(vector<int> &nums)
    {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(to_string(nums[i]).length()%2==0)
            count++;
        }
        return count;
    }
int main()
{
    vector<int> vec={12,123,1234,12345,123456};
    cout<<"the even length numbers are"<<find_even_length_numbers(vec)<<endl;
    return 0;
}

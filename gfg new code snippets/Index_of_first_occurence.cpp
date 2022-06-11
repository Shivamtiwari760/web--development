//Given a sorted array with repetition and an element x, we need to find index of first occurrence of x.//
//efiicient solution in iterative manner//
#include <iostream>
using namespace std;


int firstOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == 0 || arr[mid - 1] != arr[mid])// if any of the two is correct we say say its a first occurence//
				return mid;

			else
				high = mid - 1;// if the upper case is not the first occurence then e go to the left half and we change high=mid-1;//
		}

	}

	return -1;
}

int main() {
    
    int arr[] = {5,6,9,9,10, 10, 10, 20}, n = 8;

	int x = 10;
	
	cout<<firstOcc(arr, n, x);
	return 0;
}
//c++ program to delete an element from the array//
#include<bits/stdc++.h>
using namespace std;
//function to delete an element//
int deleteEle(int arr[], int n, int x)
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == x)
			break;
	}
	if(i == n)
		return n;
	for(int j = i; j < n - 1; j++)
	{
		arr[j] = arr[j + 1];
	}
	return n-1;
}
//driver code//
int main()
{
       int arr[] = {3, 8, 12, 5, 6}, x = 12, n = 5;
       cout<<"Before Deletion"<<endl;
       for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }
       cout<<endl;
       n = deleteEle(arr, n, x);
       cout<<"After Deletion"<<endl;
       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}

          //alternate solution//


// gfg solution//
/*// C++ program to remove a given element from an array
#include<bits/stdc++.h>
using namespace std;
 
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
// Search x in array
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
// If x found in array
if (i < n)
{
    // reduce size of array and move all
    // elements on space ahead
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
 
return n;
}
/* Driver program to test above function 
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
 
    // Delete x from arr[]
    n = deleteElement(arr, n, x);
 
    cout << "Modified array is \n";
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";
 
    return 0;
}
*/
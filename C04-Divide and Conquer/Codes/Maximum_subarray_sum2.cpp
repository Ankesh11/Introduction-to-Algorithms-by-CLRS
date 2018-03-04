#include <bits/stdc++.h>
using namespace std;
struct Tuple{
    int sum;
    int leftPos;
    int rightPos;
};
Tuple maxSubarraySum(int arr[], int n)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    int tempPos=0;
    Tuple res;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here){
            max_so_far = max_ending_here;
            res.leftPos = tempPos;
            res.rightPos = i;
        }
 
        if (max_ending_here < 0){
            max_ending_here = 0;
            tempPos = i+1;
        }
    }
    res.sum = max_so_far;
    return res;
}
int main() {
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    Tuple res = maxSubarraySum(arr, n);
    cout << "Maximum contiguous sum: " <<res.sum<<endl;
    cout<<"Index: "<<res.leftPos<<" to "<<res.rightPos;
	return 0;
}
//Time Complexity: O(n)
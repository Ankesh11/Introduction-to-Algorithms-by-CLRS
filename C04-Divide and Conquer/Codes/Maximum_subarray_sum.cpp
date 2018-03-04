#include <bits/stdc++.h>
using namespace std;
struct Data{
    int sum;
    int leftPos;
    int rightPos;
};
Data maximumCrossingSum(int arr[],int low,int mid,int high){
    Data res;
    int leftSum = INT_MIN;
    int sum = 0;
    for(int i=mid;i>=low;i--){
        sum += arr[i];
        if(sum >= leftSum){
            leftSum = sum;
            res.leftPos = i;
        }
    }
    int rightSum = INT_MIN;
    sum = 0;
    for(int i=mid+1;i<=high;i++){
        sum += arr[i];
        if(sum >= rightSum){
            rightSum = sum;
            res.rightPos = i;
        }
    }
    res.sum = leftSum + rightSum;
    return res;
}
Data maximumSubarraySum(int arr[],int low,int high){
    if(low == high)
        return Data{arr[low],low,high};
    else{
        int mid = (low+high)/2;
        Data leftSubarray,rightSubarray,crossingSubarray;
        leftSubarray = maximumSubarraySum(arr,low,mid);
        rightSubarray = maximumSubarraySum(arr,mid+1,high);
        crossingSubarray = maximumCrossingSum(arr,low,mid,high);
        if(leftSubarray.sum >= rightSubarray.sum && leftSubarray.sum >= crossingSubarray.sum)
            return leftSubarray;
        else if(rightSubarray.sum >= leftSubarray.sum && rightSubarray.sum >= crossingSubarray.sum)
            return rightSubarray;
        else
            return crossingSubarray;
    }
}
int main() {
	int arr[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	Data res = maximumSubarraySum(arr,0,n-1);
	cout<<"Maximum contiguous sum is "<<res.sum<<" from index "<<res.leftPos<<" to "<<res.rightPos;
	return 0;
}

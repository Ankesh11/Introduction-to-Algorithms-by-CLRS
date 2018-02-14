#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;
void merge(int arr[],int beg,int mid,int end){
    int i,j,k;
    int n1 = mid-beg+1;
    int n2 = end-mid;
    int L[n1+1],R[n2+1];
    for(i=0;i<n1;i++)
        L[i] = arr[beg+i];
    for(i=0;i<n2;i++)
        R[i] = arr[mid+i+1];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    i=0,j=0;
    for(k=beg;k<=end;k++){
        if(L[i]<=R[j])
            arr[k] = L[i++];
        else
            arr[k] = R[j++];
    }
}
void merge_sort(int arr[],int beg,int end){
    if(beg<end){
        int mid = floor((beg+end)/2);
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}
int main() {
	int arr[] = {2,8,6,4,3,8,1,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	merge_sort(arr,0,n-1);
	cout<<"Sorted Output:\n";
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int merge(int arr[],int beg,int mid,int end){
    int inv_count = 0;
    int i=beg, j=mid+1, k=beg;
    int temp[100];
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            inv_count += mid-i+1;
        }
    }
    while(i<=mid)
        temp[k++] = arr[i++];
    while(j<=end)
        temp[k++] = arr[j++];
    for(int i=beg;i<=end;i++)
        arr[i] = temp[i];
    return inv_count;
}
int merge_sort(int arr[],int beg,int end){
    int inv_count = 0;
    if(beg<end){
        int mid = (beg+end)/2;
        inv_count = merge_sort(arr,beg,mid);
        inv_count += merge_sort(arr,mid+1,end);
        inv_count += merge(arr,beg,mid,end);
    }
    return inv_count;
}
int main() {
	int arr[] = {2, 3, 8, 6, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int inv_count = merge_sort(arr,0,n-1);
	cout<<"Inversion count = "<<inv_count<<endl;
	return 0;
}

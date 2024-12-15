//This problem is variant 1 of Two Sums
//This soltuion aims in finding the presence of sum and not the indices.
//If sum is present, twoSum() returns "YES" otherwise "NO"

#include <bits/stdc++.h>
using namespace std;

void twoSum(int arr[], int n, int target){
    sort(arr, arr+n);
    int left=0;
    int right = n-1;
    
    while(left<right){
        if((arr[left]+arr[right])<target){
            left++;
        }
        if((arr[left]+arr[right])>target){
            right--;
        }
        if((arr[left]+arr[right])==target){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
   	return
}

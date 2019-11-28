#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


ll kadane(int arr[], int size){
	ll curr_sum = 0;
	ll best_sum = INT_MIN;
	
	for(int i = 0; i<size; i++){
		curr_sum = curr_sum +arr[i];
		if (best_sum < curr_sum)
			best_sum = curr_sum;
		if(curr_sum < 0)
			curr_sum = 0;
	}
	return (best_sum);
}


ll kcot(int arr[], int size, int k){
	
	ll kadane_sum = kadane(arr, size);
	
	if(k == 1){
		return(kadane_sum);
	}
	
	ll best_suffix_sum = INT_MIN; 
	ll curr_suffix_sum = 0;
	ll best_prefix_sum = INT_MIN; 
	ll curr_prefix_sum = 0;
	ll total_sum ;
	
	for(int i = 0; i<size; i++){
		curr_prefix_sum = curr_prefix_sum + arr[i];
		best_prefix_sum = max(curr_prefix_sum, best_prefix_sum);  
	}
	 
	total_sum = curr_prefix_sum;
	for(int i = size-1; i>0; i++){
		curr_suffix_sum = curr_suffix_sum + arr[i];
		best_suffix_sum = max(curr_suffix_sum, best_suffix_sum);
	}
	
	ll ans; 
	cout<<"total sum:"<<total_sum <<endl; 
	
	if(total_sum<0)
		ans = max(best_suffix_sum+best_prefix_sum, kadane_sum);
	else
		ans = max((best_suffix_sum+best_prefix_sum+((total_sum)*(k-2))), kadane_sum);	
	return (ans);
}


int main(){
//	int t;
//	cin>>t;
//
	int n, k;
	cin>>n>>k;
	int  arr[10];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cout<<kcot(arr,n,k)<<endl;
}

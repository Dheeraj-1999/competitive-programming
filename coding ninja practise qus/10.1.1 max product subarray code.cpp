#include<bits/stdc++.h>
using namespace std;

int max_prod_sa(int arr[], int size){
	int max_ending_here = 1;
	int min_ending_here = 1;
	int max_so_far = 1;
	
	for(int i =0; i<size; i++){
		if(arr[i]>0){
			max_ending_here = max_ending_here*arr[i];
			min_ending_here = min(min_ending_here*arr[i], 1);
			
		}else if(arr[i] == 0){
			max_ending_here = 1;
			min_ending_here = 0;
		}else if(arr[i]<0){
			int temp;
			temp = max_ending_here;
			max_ending_here = max(1, min_ending_here*arr[i]);
			min_ending_here = temp * arr[i];
		}
		
		if(max_ending_here>max_so_far){
			max_so_far = max_ending_here;
		}
		
	}
	return max_so_far;	
}

int main(){
	int size;
	cout<<"enter size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter array"<<endl;
	for(int i= 0; i<size;i++)
		cin>>arr[i];
	int prod = max_prod_sa(arr,size);
	cout<<"maximum product subarray"<<prod<<endl;
}

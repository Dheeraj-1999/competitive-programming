#include<iostream>
using namespace std;

int kadane(int *arr, int size){
	int curr_sum = 0;
	int best_sum = 0;
	for(int i = 0; i<size; i++){
		curr_sum = curr_sum + arr[i];
		if(best_sum <curr_sum)
			best_sum = curr_sum;
		if(curr_sum<0)
			curr_sum = 0;
	}
	return best_sum;
}

int main(){
	int arr[10], size;
	int sum ;
	cout<<"enter size and array"<<endl;
	cin>> size;
	for(int i= 0; i<size; i++ )
		cin>>arr[i];
	sum = kadane(arr, size);
	cout<<"sum:"<<sum<<endl;
}

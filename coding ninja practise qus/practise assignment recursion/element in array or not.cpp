#include<iostream>
using namespace std;
//int search = 9;
bool sumarr(int arr[], int size, int search){
	int result;
	if (size == 0){
		cout<<"nhi";
		return 0 ;
	}
	if (arr[0] = search){
		cout<<"hae"<<*arr;
		return 1;
	}
	result = sumarr(arr+1, size-1, search); 
	return(result);
}
int main(){
	int size,search;
	cin>>size;
	int *arr =  new int[size];
	for (int i = 0; i<size; i++)
		cin>>arr[i];
	cin>>search;
	sumarr(arr, size, search);
	delete [] arr;
//	cout<<"main count:"<<count;
}


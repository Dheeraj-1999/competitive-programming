#include<iostream>
using namespace std;
//int count = 0;
int sumarr(int arr[], int size, int count = 0){
	if (size == 0){
		cout<<"count:"<<count;
		return count;
	}
	sumarr(arr+1, size-1, (count+(*arr)));
//	count = count+1; 
	cout<<endl<<"size:"<<size<<"count:"<<count<<endl<<endl;
}
int main(){
	int size;
//	int count = 0;
	cin>>size;
	int *arr =  new int[size];
	for (int i = 0; i<size; i++)
		cin>>arr[i];
	sumarr(arr, size);
	delete [] arr;
//	cout<<"main count:"<<count;
}


#include<iostream>
using namespace std;

void productMaxSA(int arr[], int size){
	int product[size];
	int productVar = 1;
	product[0] = 1;
	for(int i = 1; i<size; i++){
		product[i] = productVar * arr[i-1];
		productVar = product[i];
		
	} 
	productVar = 1;
	for(int i = size-2; i>=0; i--){
		productVar = productVar*arr[i+1];
		product[i] = product[i]*productVar;
		
	}
	
	for(int i = 0; i<size; i++)
		cout<<"product subarray is"<<product[i]<<endl;
		
}
int main(){
	int size;
	cout<<"enter the size"<<endl;
	cin>>size;
	int arr[size];
	for(int i = 0; i<size; i++)
		cin>>arr[i];
	productMaxSA(arr,size);
}

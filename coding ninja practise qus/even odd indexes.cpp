#include<iostream>
#include<vector>

using namespace std;
int main(){
	int n, OddSum = 0; 
	int EvenSum = 0;
	cin>>n;
	vector<int> arr(n);
	
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i<n; i++){
		if( i % 2 == 0){
			if(arr[i] % 2 == 0 ){
				EvenSum = EvenSum + arr[i];
			}
			
		}
		else{
			if(arr[i]%2 != 0)
				OddSum += arr[i];	
		}
	}
	cout<<endl<<"even:"<<EvenSum<<"::::::odd:"<<OddSum;
	return 0 ;
}

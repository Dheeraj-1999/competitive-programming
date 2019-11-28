#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum = 0;int Total = 0; 
	int  n;
	// cout<<"enter size of 2d array"<<endl;
	cin>>n;
    int arr[n][n];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cin>>arr[i][j];
			Total += arr[i][j];
		}
	}
	
	for(int i = 1; i<n-1; i++){
		for(int j = 1; j<n-1; j++){
				if (i!= j && j != n-(i+1))
					sum += arr[i][j];	
		}
	}
	cout<<Total - sum;
}

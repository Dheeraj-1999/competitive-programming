#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    //int arr[10],a[10];
    int n;
    vector<int> arr(20);
    vector<int> a(20);

    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    set<int> s;
    set<int> :: iterator it;

    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    int i = 0;
    for(it = s.begin(); it != s.end(); it++){
        a[i] = *it ;
        i++;
    }

    cout<<"i = "<<i<<endl<<endl<<endl;
    for (int j =0; j<i; j++){
        cout<<endl<<" "<<a[j];

    }

}


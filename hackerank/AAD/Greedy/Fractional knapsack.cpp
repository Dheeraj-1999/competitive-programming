#include<iostream>
#include<map>
#include<vector>

using namespace std;
int knapsack(int ){
    return 0;
}
int main(){
    map<int,int> m;
    map<int,int> :: iterator it;
    vector<int> profit;vector<int> weight;
    int n;

    cin>> n ;
    cout<<"enter profit array"<<endl;
    for(int i = 0; i<n;i++ ){
        cin>>profit[i];
    }
    cout<<"enter weight array"<<endl;
    for(int i = 0; i<n;i++ ){
        cin>>weight[i];
    }

    for(int i = 0; i< profit.size();i++){
        m[profit[i]] = weight[i];
    }

    for(it = m.begin(); it != m.end(); it++){
        cout<<endl<<it->first<<":"<<it->second;
    }
}

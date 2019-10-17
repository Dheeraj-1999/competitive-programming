#include<iostream>>
#include<cstring>
#include<map>

using namespace std;
int main(){
    string str;
    cin>>str;

    map<char,int> m;
    map<char,int> ::iterator it;

    for (int i = 0; i<str.size(); i++){
        m[str[i]] += 1;
    }
    for (int i = 0; i<str.size();i++){
        if(m[str[i]] == 1){
            cout<<str[i];
            return 0;
        }
    }
    cout<<str[0];
    return 0;
    /*
    for(it = m.begin(); it != m.end(); it++ ){
        if(it->second == 1){
            cout<<it->first;
            break;
        }
        //cout<<it->first<<":"<<it->second<<endl;
    }*/
}

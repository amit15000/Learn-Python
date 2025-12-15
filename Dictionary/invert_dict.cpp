#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    
    unordered_map<string,int> record;

    record["a"] = 1;
    record["b"] = 2;
    record["c"] = 1;


    unordered_map<int,vector<string>> result;


    for(auto &item : record){
        string key = item.first;
        int value = item.second;

        result[value].push_back(key);
    }


    for(auto &item : result){
        int key = item.first;
        vector<string> value = item.second;

        cout << key << " : ";
        for(auto &v : value){
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;

}
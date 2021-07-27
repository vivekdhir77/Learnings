#include<iostream>
#include<vector>

using namespace std;

void allsubsets_withoutReturn(vector<int>& arr,int id, string ans){
    if(id==arr.size()){
        cout<<ans<<"\n";
        return;
    }
    allsubsets_withoutReturn(arr,id+1, ans);
    allsubsets_withoutReturn(arr,id+1, ans+to_string(arr[id])+" ");
}

vector<string> allsubsets_withReturn(vector<int>& arr,int id){
    if(id==arr.size()){
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> ans = allsubsets_withReturn(arr,id+1);
    vector<string> myAns;
    for(auto ele: ans){
        myAns.push_back(ele);
        myAns.push_back(to_string(arr[id])+" "+ele);
    }
    return myAns;
}

int main(){
    vector<int> arr={1,2,3};

    // allsubsets_withoutReturn(arr,0, "");

    vector<string> ans = allsubsets_withReturn(arr,0);

    for(auto i:ans){
        cout<<i<<endl;
    }
}
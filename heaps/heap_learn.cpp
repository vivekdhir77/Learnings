#include<iostream>
#include<vector>
using namespace std;

vector<int> insert(vector<int> a, int val){
    int n = a.size()+1;
    vector<int> b(n);
    b[0] = 0;
    for(int i=1; i<n-1; i++){
        b[i] = a[i];
    }
    b[n-1] = val;
    int i = n-1;
    
    while( i>1){
        int parent = i/2;
        if(b[parent]<b[i]){
        swap(b[i],b[parent]);
        i = parent;}
        else{
            break;
        }
    }
    return b;
}

vector<int> deletion(vector<int> a){
    int n = a.size();
    a[i] = a[n];
    vector<int> b(n-1);
    for(int i=1; i<=n-1; i++){
        b[i] = a[i];
    }
    while(i)
}

void printarr(vector<int> a){
    int n = a.size();
    for(int i=0; i < n; i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
int main(){
    vector<int> a{0, 50,30, 40,10,5,20,30};
    a = insert(a, 60);
    printarr( a);
    a = insert(a, 45);
    printarr(a);
}
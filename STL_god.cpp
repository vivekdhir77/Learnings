#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

void vectorsL()
{
    vector<int> X{3, 2, 1, 6, 4, 8};

    X.push_back(0);
    X.push_back(6);
    X.push_back(6);
    X.push_back(6);

    sort(X.begin(), X.end()); // 0 1 2 3 4 6 6 6 6 8

    auto check = binary_search(X.begin(), X.end(), 6); // true
    check = binary_search(X.begin(), X.end(), 9);      // false

    vector<int>::iterator it1 = lower_bound(X.begin(), X.end(), 7); // 8
    vector<int>::iterator it2 = upper_bound(X.begin(), X.end(), 4);
    cout << endl
         << *(it1) << endl; // 8
    cout << endl
         << *(it2) << endl; // 6

    vector<int>::iterator it3;
    /*
    for(it3 = X.begin(); it3!=X.end(); it3++)
    {
        cout<< *it3 <<" ";
    }
    */
    for (auto i : X)
    {
        cout << i << " ";
    }
}

void setsL()
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for (int x : s)
    {
        cout << x << " "; // -10 -1 1 2
    }
    auto it = s.find(2);
    if (it == s.end())
    {
        cout << "Not present\n";
    }
    else
    {
        cout << "present\n"
             << *it << endl;
    }

    auto it2 = s.lower_bound(0);
    auto it3 = s.upper_bound(1);
    cout << *it2 << " " << *it3 << endl;
}

void mapL()
{
    map<int, int> a;
    a[1] = 100;
    a[2] = -1;
    a[100] = 60;
    a[569] =77;

    map<char, int> cnt;

    string s = "Sai Siddhartha Vivek Dhir Rangoju";

    for (auto x: s)
    {
        cnt[x]++;
    }
    
    cout<<cnt['v']<<" "<<cnt['a']<<endl;

}

void problem()
{
    /*
    add [2,3]
    add [10, 20]
    add [20, 400]
    add [401,450]

    give the range where the point exists*/

    set<pair<int, int>> s;

    s.insert({401,450});
    s.insert({10,20});
    s.insert({2,3});
    s.insert({30,400});

// storage
    // 2,3
    // 10,20
    // 30, 400
    // 401, 450

    int point = 50;

    auto it = s.upper_bound({point, INT_MAX});
    it--;

    pair<int, int> current  = *it;

    if(current.first <= point && point<=current.second)
    {
        cout<<"Yes it is present: "<<current.first<<" "<< current.second<<endl;
    }
    else
    {
        cout<<"The given point is not lying in an interval..\n";
    }
}

int main()
{
    // vectorsL();
    // setsL();
    // mapL();
    problem();
}

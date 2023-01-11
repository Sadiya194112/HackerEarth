#include<bits/stdc++.h>
using namespace std;
signed main(){
    map<int, multiset<string>>m;
    int n,i;    cin>>n;
    for(i=0; i<n; i++){
        string s;
        int x;  cin>>s>>x;
        m[x].insert(s);
    }
    auto it = --m.end();
    while(true){
        auto &students = it->second;
        int marks = it->first;
        for(auto &stu:students)  cout<<stu<<" "<<marks<<endl;
        if(it==m.begin())   break;
        it--;
    }
    return 0;
}

/*
Input:
4
Eve 78
Bob 99
Alice 78    //As there are 2 Alice with same marks that's why we can't use set. We have to use Multiset
Alice 78
*/

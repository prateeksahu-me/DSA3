#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinctElements(int n, int b, vector<int> a){
    
    vector<int> arr;
    map<int, int> map;
    if(b>n)
    {
        return arr;
    }

    for(int j = 0;j<b;j++)
    {
        if(map.count(a[j]))
        {
            map.at(a[j])++;
        }
        else
        {
            map.insert(pair<int, int>(a[j],1));
        }

    }
    arr.push_back(map.size());


    for(int i = b;i<n;i++)  
    {
        if(map.find(a[i-b])->second>1)
        {
            map.find(a[i-b])->second--;
        }
        else
        {
            map.erase(a[i-b]);
        }
        
        if(map.find(a[i])->second>=1)
        {
            map.find(a[i])->second++;
        }
        else
        {
            map.insert(pair<int, int>(a[i],1));
        }
        arr.push_back(map.size());
    }

    

    return arr;
}


int main(){
    int n, b;
    cin>> n >> b;
    vector<int> a(n);
    for(auto &i: a)
        cin>> i;
    vector<int> result = countDistinctElements(n, b, a);
    assert( result.size() == max(0,n - b + 1) );
    for(auto &i: result){
        cout << i << " " ;
    }
}

#include<bits/stdc++.h>
using namespace std;
int firstUniqueInteger(vector<int> &v) {
	int result;

	if(v.size()==0)
	{
		return -1;
	}
	
	map<int, int> mp;
  
	for(int i = 0;i<v.size();i++)
	{
		
		if(mp.find(v[i]) == mp.end())
		{
			mp.insert({ v[i], 1 });
		}
		else
		{
			mp.at(v[i])++;
		}
	}

	for(int i = 0;i<v.size();i++)
	{
		if(mp.find(v[i])->second==1)
		{
			return v[i];
		}
		else
		{
			return -1;
		}
	}
	return -1;
}
int main() {
	int n, m;
	cin >> n;
	vector<int> v(n);
	for ( int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int ans = firstUniqueInteger(v);
	cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(int n, string s)
{

	if(n==0)
	{
		return -1;
	}
	
	map<char, int> mp;
    int i,count =0;
	for(i = 0;i<n;i++)
	{
		
		if(mp.find(s[i]) == mp.end())
		{
			mp.insert({ s[i], 1 });
		}
		else
		{
			mp.at(s[i])++;
		}

        if(s[i]=='A')
        {count++;}

	}
    
    std::map<char, int>::iterator itr;
    // for(itr=mp.begin();itr!=mp.end();itr++)
    // {
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }

    int maxOdd = 0;
    int result = 0;
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second%2 == 0)
        {
            result += itr->second;
        }
        else{
            result += itr->second-1;
        }
    }
    result++;
    return result;
}

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = longestPalindrome(n, s);
    cout << ans << endl;
}
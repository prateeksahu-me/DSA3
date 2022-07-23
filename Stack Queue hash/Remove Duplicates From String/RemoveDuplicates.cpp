#include <bits/stdc++.h>
using namespace std;

string removeAdjacentDuplicates(string s)
{
    stack<char> s1,s2;
    string ans ="";
    if(s.empty())
    {
        return "";
    }
    
    for (int i = 0; i < s.length(); i++) 
    {
        if(s1.size() == 0)
        {
            s1.push(s[i]);
        }       
        else
        {
            if(s1.top() == s[i])
            {
                s1.pop();
            }
            else
            {
                s1.push(s[i]);
            }
        }

    }

    for(int i = s1.size();i>0;i--)
    {
        s2.push(s1.top());
        s1.pop();
    }

    for(int i = s2.size();i>0;i--)
    {
        ans += s2.top();
        s2.pop();
    }

    return ans;


}

int main()
{

    string s;
    cin >> s;

    string res = removeAdjacentDuplicates(s);

    cout << res << "\n";
}

#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool backspaceStringCompare(string S, string T){

    stack<char> s1;
    stack<char> s2;
    
    int Slength = S.length();
    int Tlength = T.length();


    for(int i = 0;i<Slength;i++)
    {
        if(S[i]!='#')
        {
            s1.push(S[i]);
        }
        else{
            if(s1.size() != 0)
            {
                s1.pop();
            }
        }
    }
    for(int i = 0;i<Tlength;i++)
    {
        if(T[i]!='#')
        {
            s2.push(T[i]);
        }
        else{
            if(s2.size() != 0)
            {
                s2.pop();
            }
        }
    }
    
    if(s1.size() == s2.size())
    {
        for(int i = s1.size();i>0;i--)
        {
            if(s1.top() != s2.top())
            {
                return false;
            }
            s1.pop();
            s2.pop();
        }
    }
    else
    {
        return false;
    }

    return true;
}

int main(){
    int tests;
    cin >> tests;
    while (tests--) {
        string S, T;
        cin >> S;
        cin >> T;
        bool result = backspaceStringCompare(S, T);
        if (result) {
            cout << "true" << "\n";
        }
        else {
            cout << "false" << "\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
stack<int> S , minstack;

stack<int> s1;

void push( int x) {
    
    int current_size = S.size();

    if(S.size() == 0)
    { 
        s1.push(x);
    }
    else if(x>s1.top()){
        
        for(int i = s1.size();i>0;i--)
        {
            if(x>s1.top())
            {
                S.push(s1.top());
                s1.pop();
            }
        }

        s1.push(x);
        for(int i = S.size();i>current_size;i--)
        { 
            s1.push(S.top());
            S.pop();
        }
    }
    else{
        s1.push(x);
    }

    S.push(x);
    return;
}

void pop() {

    if(S.size() == 0)
    {
        return;
    }

    int key = S.top(),current_size = S.size();

    for(int i = s1.size();i>0;i--)
    {
        if(key!= s1.top())
        {
            S.push(s1.top());
            s1.pop();
        }
        else{
            s1.pop();
            break;
        }
    }

    for(int i = S.size();i>current_size;i--)
    { 
        s1.push(S.top());
        S.pop();
    }

    S.pop();
    return;
}

int findMin() {
    if(s1.size() == 0)
    {
        return -1;
    }
    return s1.top();
}

int main()
{
    int n, m, t;
    cin >> t;
    while (t--) {
        int ch;
        cin >> ch;
        if ( ch  == 1) {
            cin >> n;
            push(n);
        }
        else if ( ch == 2)
            pop();
        else
            cout << findMin() << endl;
    }

}
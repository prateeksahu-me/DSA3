#include <bits/stdc++.h>
#define MAX 256
using namespace std;

bool compare(char arr1[], char arr2[])
{
    for (int i = 0; i < MAX; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}


vector<int> findAnagrams(string s, string p)
{
	string pat = p,txt =s;

	vector<int> ans;
	int M = pat.length(), N = txt.length();
 
    
    char countP[MAX] = { 0 }, countTW[MAX] = { 0 };
    for (int i = 0; i < M; i++) {
        (countP[pat[i]])++;
        (countTW[txt[i]])++;
    }
 
    
    for (int i = M; i < N; i++) {
        
        if (compare(countP, countTW))
			ans.push_back((i-M));
            
        (countTW[txt[i]])++;
 
   
        countTW[txt[i - M]]--;
    }
 

    if (compare(countP, countTW))
		ans.push_back((N-M));
      
	return ans;
}

int main()
{
	string s, p;
	cin >> s >> p;
	vector<int> answer = findAnagrams(s, p);
	cout << answer.size() << "\n";
	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}
	return 0;
}
//Super reduced String
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

int main()
{
    stack<char> S;
    string inp;

    cin >> inp;

    for(char c : inp) {
        if(!S.empty() && S.top() == c) {
            S.pop();
        }
        else {
            S.push(c);
        }
    }

    string ans;
    if(S.empty()) {
        cout << "Empty String";
    }
    else {
         while(!S.empty()) {
            ans += S.top();
            S.pop();
        }
        
        reverse(all(ans));
        cout << ans;

    }
    
   
}
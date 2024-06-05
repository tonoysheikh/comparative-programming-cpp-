#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n' 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long



void solve()
{
    string s;
    getline(cin , s);
    istringstream iss(s);
    string word;

    string re;
    string res;
    while(iss >> word)
    {
        //cout << word << endl;
        for(int i = 0; i < word.size();i++)
        {
            if(isalpha(word[i]))
            {
                re += tolower(word[i]);
            }
        }

    }
    // cout << re;
    // cout << nl;
    res = re;
    reverse(re.begin() , re.end());

    if(res == re)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int count = 0;
        for(int i=0; i<n.length(); i++)
        {
            for(int j=0; j<s.length(); j++)
            {
                if(n[i]==s[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count == n.size())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

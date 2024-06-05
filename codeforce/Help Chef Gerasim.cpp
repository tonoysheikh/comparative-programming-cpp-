#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin >> len;
    int v[len];
    memset(v , 0,sizeof(v));
    int sum = 0;
    for(int i = 0; i < len;i++)
    {
        cin >> v[i];
        sum += v[i];
        
    }

    int mn = 0;
    int first = 0;
    int last = 0;
    int digit = 0;
    int cnt = 0;
    
    if(sum % len == 0)
    {
        digit = sum / len; // 1250/5 = 250
        for(int i = 0; i < len;i++)
            {
                if(v[i] == digit)cnt++;
                        
                if(digit < v[i])
                    {
                        first = i;// 0 + 1 = 1
                        // mn = v[i] - digit;

                    }
                else if(digit > v[i])
                    {
                        last = i; // 3 + 1 = 4
                        mn = digit - v[i]; // 250 - 230 = 20
                    }
                    
            }

        if(cnt == len-2)
		{
			cout << mn << " ml. from cup #" << last + 1 << " to cup #"<< first + 1 << "."<< "\n";
		}
		else if(cnt == len)
        {
            cout << "Exemplary pages.\n";
        }
		else
		{
			cout<<"Unrecoverable configuration.\n";
        }       
        
    }
    else
    {
        cout << "Unrecoverable configuration.\n";
    }

    return 0;
}
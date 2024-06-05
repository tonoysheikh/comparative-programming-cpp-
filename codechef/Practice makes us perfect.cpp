 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    int cnt = 0;
    if(a >= 10)
        cnt++;
    if(b >= 10)
        cnt++;
    if(c >= 10)
        cnt++;
    if(d >= 10)
        cnt++;

        cout << cnt << endl;

    return 0;
}



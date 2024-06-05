#include<bits/stdc++.h>
using namespace std;
int main()
{
	double  d= 0.00;
	for(int i = 1; i <= 100; i++)
	{
		d += 1.00/i;


	}
	cout << fixed;
	cout << setprecision(2) << d << endl;
	return 0;
}

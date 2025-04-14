#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m,meta;
	cin>>n>>m;

	if(n<m)
	{
		cout<<-1;
	}
	else
	{
		if(n%2==0) meta=n/2;
		else meta=(n/2)+1;
		if(meta%m==0)cout<<meta;
		else
		{
			while(meta%m!=0)
			{
				meta++;
			}
			cout<<meta;
		}
	}

	return 0;
}

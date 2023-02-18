#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int maxi = INT_MIN, a, b;
	for (int i = 0; i < n - 1; i++)
	{
		if ((arr[i] + arr[i + 1]) >= maxi)
		{
			cout << (arr[i] + arr[i + 1]) 
			a = i;
			b = i + 1;
		}
	}
	cout << arr[a] << " " << arr[b];
	return 0;
}
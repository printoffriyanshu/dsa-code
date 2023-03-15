#include <bits/stdc++.h>
using namespace std;

double getMedian(int arr1[], int arr2[], int n)
{
	int low = (int)-1e9, high = (int)1e9;

	int pos = n;
	double ans = 0.0;
	while (low <= high) {
		int mid = low + ((high - low) >> 1);
		int ub = upper_bound(arr1, arr1 + n, mid) - arr1
				+ upper_bound(arr2, arr2 + n, mid) - arr2;
		if (ub <= pos)
			low = mid + 1;
		else
			high = mid - 1;
	}

	ans = low;
	pos--;
	low = (int)-1e9;
	high = (int)1e9;
	while (low <= high) {
		int mid = low + ((high - low) >> 1);
		int ub = upper_bound(arr1, arr1 + n, mid) - arr1
				+ upper_bound(arr2, arr2 + n, mid) - arr2;

		if (ub <= pos)
			low = mid + 1;
		else
			high = mid - 1;
	}
	ans = (ans + low) / 2;

	return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
	int arr1[n] 
	int arr2[m] 

	for (int i = 0; i < n; i++)
    {
       cin>>arr1[i];
    }
	for (int i = 0; i < m; i++)
    {
       cin>>arr2[i];
    }
    

	double median = getMedian(arr1, arr2, n);

	cout << "Median is " << median << endl;

	return 0;
}

//Question no 2 (Example 1)

#include <bits/stdc++.h>
using namespace std;

void printMaxActivities(int s[], int f[], int n)
{
	int i, j;

	i = 1;
	cout <<i;

	for (j = 1; j < n; j++)
	{
	if (s[j] >= f[i])
	{
		cout <<"  " << j;
		i = j;
	}
	}
}

int main()
{
	int s[] = {2, 1};
	int f[] = {2, 2};
	int n = sizeof(s)/sizeof(s[0]);
	printMaxActivities(s, f, n);
	return 0;
}

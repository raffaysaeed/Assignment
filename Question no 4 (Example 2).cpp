//Question no 4 (Example 2)

#include <bits/stdc++.h>
using namespace std;

class Assignment
{
public:
vector<int> candyStore(int candies[], int N, int K)
{
sort(candies,candies+N);
vector<int>res;
int sum=0,i=0,d=N;
while(d>0) 
{
d-=K+1;
sum+=candies[i];
i++;
}
res.push_back(sum);
sum=0,i=N-1,d=N;
while(d>0) 
{
d-=K+1;
sum+=candies[i];
i--;
}
res.push_back(sum);
return res;
}
};

int main()
{
int t;
cout<<"How many times you want to buy candies: ";
cin >> t;
while (t--)
{
int N, K;
cout<<"Enter the value of N and K: ";
cin >> N >> K;
int candies[N];
for (int i = 0; i < N; i++)
{
cout<<"Enter Candies: ";	
cin >> candies[i];
}
Assignment ob;
vector<int> cost = ob.candyStore (candies, N, K);
cout << cost [0] << " " << cost[1] << endl;

}
return 0;
}


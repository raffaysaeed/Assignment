//Question no 2 (Example 2)

#include <bits/stdc++.h>
using namespace std;

class Assignment{
public:
int activitySelection (vector<int> start, vector<int> end, int n)
{
vector<pair<int, int> >v;
int i;
for(i=0;i<n;i++)
{
v.push_back(make_pair(start[i], end[i]));
}
sort(v.begin(),v.end(),[] (pair<int, int> a, pair<int, int> b)
{
return a.second < b.second;
});
int prev=0;
int res=1;
for(int curr=1;curr<n;curr++)
{
if(v[curr].first>v[prev].second)
{
res++;
prev=curr;
}
}
return res;
}
};


int main() {
int t;
cin >> t;

while(t--)
{
int n;
cin >> n;

vector<int> start(n), end(n);

for(int i=0;i<n;i++)
cin>>start[i];

for(int i=0;i<n;i++)
cin>>end[i];

Solution ob;
cout << ob.activitySelection (start, end, n) << endl;

}
return 0;
}


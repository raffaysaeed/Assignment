//Question no 1 (Example 2)

#include<bits/stdc++.h>
using namespace std;

class Assignment
{
	
public:
vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
{
vector<int>a;

int top, down, left,right;
int direction = 0;

top = 0;
down = r-1;
left = 0;
right = c-1;

while(left<=right && top <= down) {
if(direction == 0) {
for(int i = left;i<=right;i++) {
a.push_back(matrix[top][i]);
}
top++;
}

else if(direction == 1) {
for(int i = top; i<=down;i++) {
a.push_back(matrix[i][right]);
}
right--;
}

else if(direction == 2) {
for(int i = right ; i>=left;i--) {
a.push_back(matrix[down][i]);
}
down--;
}

else if(direction == 3) {
for(int i = down; i>=top;i--) {
a.push_back(matrix[i][left]);
}
left++;
}

direction = (direction+1)%4;
}

return a;
}
};

 int main(){
 int t=2;
 
while(t--)
{
 int r,c;
  cout<<"Enter Number of Rows & Coulumbs of Matrix: ";
  cin>>r>>c;
  vector<vector<int> > matrix(r);

for(int i=0; i<r; i++)
{
  matrix[i].assign(c, 0);
for(int j=0; j<c; j++)
{
  cout<<"Entries: ";
  cin>>matrix[i][j];
}
}
Assignment ob;

vector<int> result= ob. spirallyTraverse (matrix, r, c);
for (int i = 0; i < result.size(); ++i)
cout<<result[i]<<" ";

cout<<endl;

}
return 0;
}


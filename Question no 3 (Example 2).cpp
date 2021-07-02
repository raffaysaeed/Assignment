//Question no 3 (Example 2)

#include<bits/stdc++.h>
using namespace std;

class Assignment
{
	public:
int countMin(string str){
        string s=str; int m=str.length();
        reverse(str.begin(),str.end());
        int t[m+1][m+1];
        memset(t,-1,sizeof(t));
        for(int i=0;i<=m;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)
                    t[i][j]=0;
                else if(s[i-1]==str[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j], t[i][j-1]);
            }
        }
        return m-t[m][m];
    }
};

int main(){

int t;
cout<<"How many Strings you Want to Check: ";
cin >> t;

while(t--){
string str;
cout<<"Enter String: ";
cin >> str;
Assignment ob;
cout <<ob.countMin(str) << endl;
}
return 0;
}


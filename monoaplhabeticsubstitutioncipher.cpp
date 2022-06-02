#include<bits/stdc++.h>
using namespace std;
#define ll long long int

unordered_map<char,char> changes_to;
vector<int> assigned;
string question;

void print()
{
	string ans;
	for(int i=0;i<question.size();i++)
	{
		if(question[i]<='z'&&question[i]>='a')
			ans.push_back(changes_to[question[i]]);
		else
			ans.push_back(question[i]);
	}
	cout<<ans<<endl;
}

void make(int i,int n)
{
	if(i==n)
	{
		print();
		return;
	}
	for(char c='a';c<='z';c++)
	{
		if(assigned[c-'a']==0)
		{
			assigned[c-'a']=1;
			changes_to['a'+i]=c;
			make(i+1,n);
			assigned[c-'a']=0;
		}
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

// cout<<t<<endl;
// ${2:is Single Test case?}cin>>t;
// cin>>t;
string s;
getline(cin, s);
int nums=0;
unordered_map<char,int> present;
for(auto c:s)
{
	present[c]++;
}
for(char c='a';c<='z';c++)
{
	if(present[c])
		nums++;
}
question=s;
int t=26;
while(t--)
assigned.push_back(0);
make(0,nums);
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}


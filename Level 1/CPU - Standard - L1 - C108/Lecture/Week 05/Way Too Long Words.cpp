#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        if(s.size()<=10) cout<<s<<'\n';
        else cout<<s.front()<<s.size()-2<<s.back()<<'\n';
    }
	return 0;
}

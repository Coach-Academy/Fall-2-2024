#include <iostream>
using namespace std;

int main()
{
    string s; cin>>s;
    if(s=="RRR") cout<<3;
    else if(s=="SSS") cout<<0;
    else if(s=="RRS" or s=="SRR") cout<<2;
    else cout<<1;
    return 0;
}

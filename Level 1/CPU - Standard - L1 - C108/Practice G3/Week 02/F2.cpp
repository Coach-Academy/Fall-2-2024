#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    cout<<((n%10)==(n/100) ? "Yes" : "No");
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n+1];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        int cnt = 0, mn = arr[n-1];
        for(int i = n-2 ; i >= 0  ; i--){
            if(arr[i]>mn) cnt++;
            else mn = arr[i];
        }
        cout<<cnt<<'\n';
    }
	return 0;
}

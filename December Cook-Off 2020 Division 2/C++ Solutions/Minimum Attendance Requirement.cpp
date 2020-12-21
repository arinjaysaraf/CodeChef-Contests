#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        string b;
        int rem = 120-n;
        cin>>b;
        int i=0;
        while(i<n){
            if(b[i]=='1')
                count++;
            i++;
        }
        float a = count + rem;
        float ans = (a/120)*100;
        if(ans<75)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;  
        cin>>n;
        string s;           
        cin>>s;
        
        vector<long long int> v;
        
        long long int sum=0;
        int c=0;

        for(int i=0;i<n;i++){
            long long int L=i;
            long long int R=n-i-1;
            if(s[i]=='L'){
                if(R>L){
                    c++;
                    sum+=R;
                    v.push_back(R-L);
                }
                else{
                    sum+=L;
                }
            }
            else{
                if(L>R){
                    c++;
                    v.push_back(L-R);
                    sum+=L;
                }
                else{
                    sum+=R;
                }
            }
        }

        vector<long long int> ans(n+1);

        for(int i=c;i<=n;i++){
            ans[i]=sum;
        }

        sort(v.begin(),v.end(),greater<long long int>());

        for(int i=c-1;i>=1;i--){
            sum-=v.back();
            v.pop_back();
            ans[i]=sum;
        }

        

        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

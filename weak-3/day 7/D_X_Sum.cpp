#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){

    int t;
    cin>> t;
    while(t--){
        int r,c;
        cin>> r>> c;
        ll a[r][c];
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin >> a[i][j];
            }
        }

        ll ans= 0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){

                ll sum = a[i][j];
                int tempi =i-1, tempj=j+1;
                while(tempi>=0 && tempj <=c-1){
                    sum = sum+a[tempi][tempj];
                    tempi--;
                    tempj++;
                }

                tempi =i-1, tempj=j-1;
                while(tempi>=0 && tempj>=0){
                    sum = sum +a[tempi][tempj];
                    tempi--;
                    tempj--;
                }

                tempi = i+1, tempj=j-1;
                while(tempi<=r-1 && tempj>=0 ){
                     sum = sum +a[tempi][tempj];
                     tempi++;
                    tempj--;
                }

                tempi= i+1; tempj=j+1;
                while(tempi<=r-1 && tempj<= c-1){
                     sum = sum +a[tempi][tempj];
                     tempi++;
                     tempj++;
                }

                ans = max(ans,sum);
            }

        }
        cout << ans <<"\n";



    }
    return 0;
}
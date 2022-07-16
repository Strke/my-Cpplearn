#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int maxn=1e3+5;
int v[maxn],w[maxn];
int f[maxn][maxn];
int main(){
    int N,V;
    cin>>N>>V;
    for(int i=N;i>=1;i--) cin>>v[i]>>w[i];
    for(int i=1;i<=N;i++){
        for(int j=0;j<=V;j++){
            if(j>=v[i]) f[i][j]=max(f[i-1][j],f[i-1][j-v[i]]+w[i]);
            else f[i][j]=f[i-1][j];
        }
    }
    for(int i=N,num=V;i>=1;i--){
        if(num>=v[i]&&f[i][num]==f[i-1][num-v[i]]+w[i]){
            cout<<N-i+1<<" ";
            num-=v[i];
        }
    }
    cout<<endl;
    return 0;
}
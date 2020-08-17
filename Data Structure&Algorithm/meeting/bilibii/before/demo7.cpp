//并查集基本应用，最后别忘了减掉本身
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
vector<int>f;
int find(int x){
    return x==f[x]?x:f[x]=find(f[x]);
}
int main(void){
    cin>>n;
    int num=n;
    f=vector<int>(n);
    for(int i=0;i<n;i++)f[i]=i;
    int ans=0,b=0;
    while(num--){
        int one,two;
        scanf("%d,%d",&one,&two);
        int fx=find(one),fy=find(two);
        if(fx!=fy)f[fx]=fy;
    }
    for(int i=0;i<n;i++){
        if(find(ix)==find(i))ans++;
    }
    cout<<ans-b-1<<endl;
    return 0;

}








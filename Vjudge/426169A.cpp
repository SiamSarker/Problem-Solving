#include<stdio.h>

int main(){

  int c;
  scanf("%d",&c);
  while(c--){
    int n,m,k,gems=0,value=1,ans=0;
    scanf("%d%d%d",&n,&m,&k);
    int arr [m][3];
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
            value=1;
        for(int j=i-1;j>=0;j--){
            if(arr[i][1]==arr[j][1]){
                value=0;
                break;
            }
        }
        if(value==1){
            ans+=arr[i][2];
            gems++;
            }
        if(gems==k) 
            break;

    }
    if(gems==k)printf("%d\n",ans);
    else printf("impossible\n");
  }
  return 0;

}
#include<stdio.h>

int main(){
  int x[10][10], y[10][10], res[10][10];
  int m,n;
  scanf("%d%d",&m,&n);
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&x[i][j]);
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

      printf("%d",x[i][j]);
      printf(" ");
    }
    printf("\n");
  }
  printf("transpose");
  printf("\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d",x[j][i]);
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}

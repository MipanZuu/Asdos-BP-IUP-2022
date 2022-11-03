#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i, j;
  scanf("%d", &n);

  for(i = 1; i <= n+1; i++){

    // for(int h = 0; h < n; h++){

    for(j = 1; j <= n+1-i; j++){
        printf(" ");
    }
    for(j = 1; j <=2*i-1; j++){
        if(j > i){
        printf("%d", abs(2*i-j-1));
        }
        else{
        printf("%d", abs(j-1));
        }
    }
    for(j = 1; j <= n+1-i; j++){
        printf(" ");
    }
    // }
    printf("\n");
  }

for(i = n; i > 0; i--){
    for(int h = 0; h < n; h++){
    for(j = 1; j <= n+1-i; j++){
        printf(" ");
    }
    // for(j = 1; j <=2*i-1; j++){
    //     if(j > i){
    //     printf("%d", abs(2*i-j-1));
    //     }
    //     else{
    //     printf("%d", abs(j-1));
    //     }
    // }
    for(j = 1; j <= n+1-i; j++){
        printf(" ");
    }
    }
    printf("\n");
  }

  return 0;
}
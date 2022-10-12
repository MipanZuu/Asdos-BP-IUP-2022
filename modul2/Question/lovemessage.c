#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    int d;
    int x;
    int i, j;
    int sn;
    char m[100];
    
    scanf("%d", &d);
    int row[d],column[d];
    char love, result;
    //scanf for avicii
    for(int b=0; b<d;b++){
        scanf("%d %d",&row[b],&column[b]);
    }

    for (j=0; j<d; j++) {
        scanf("\n%d\n", &sn);
        scanf("%[^\n]s", m);
        
        for (i=0; m[i] !='\0'; i++) {
            love=m[i];
            if (love>= 'a' && love <= 'z') {
                x=love;
                result=(x+sn-97)%26+97;
                m[i]=result;
            }
            else if (love >= 'A' && love <= 'Z'){
                result=(love+sn-65)%26+65;
                m[i]=result;
            }
        }
        printf("%s\n", m);
    }
    
    //avicii logos
    for(int a=0; a<d; a++){
        for(i=0; i<row[a];i++){
            for(int j=0; j<column[a]; j++){
                if (j==i+1) {
                    printf("%c", ' ');
                }else{
                    printf("%c", '*');
                }
            }
          printf("\n");
        }
         printf("\n");
    }
    return 0;
}

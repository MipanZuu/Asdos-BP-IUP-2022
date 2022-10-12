#include <stdio.h>
#include <string.h>
int i;
int strlenhaha(char str[]);
int checkPalindrom(char str[], int l, int r);

int main(){
    char S[101];
    scanf("%s", S);
    int isPalindrom = checkPalindrom(S, 0, strlenhaha(S)-1);
    if (isPalindrom) printf("YA");
    else printf("BUKAN");
return 0;
}

int strlenhaha(char str[]){
int len = 0;
for (i = 0; str[i] !='\0'; i++){
    len++;
}
return len;
}

int checkPalindrom(char str[], int l, int r){
if (l > r) return 1;
if (str[l] != str[r]) return 0;
return checkPalindrom(str, l+1, r-1);
}
/*
    E3.c
    2022-11-02
    Denta Bramasta
*/

#include <stdio.h> 
#include <string.h>

char nama[501][11];
int list,i, j;
void strclear(int a)
{
   nama[a][0]= '\0';
}
   void swap(int a, int b)
{
   char tmp[11];
      strcpy(tmp, nama [a]); 
      strclear (a);
      strcpy(nama [a] , nama [b]);
      strclear (b);
      strcpy(nama [b], tmp);
}
int main()
{
   scanf ("%d", &list);
      for(i=1; i<=list; i++) 
      scanf ("%s" , nama[i]);

      for(i=1; i<=list-1; i++){
         for (j=i; j<=list; j++){ 
            if(strlen(nama[j])<strlen(nama[i]))
            swap(j,i);
            if(strlen(nama[j])==strlen (nama[i]) )
            if(strcmp (nama[j],nama[i]) <0)
            swap(j, i);
      }
   }
   for(i=1; i<=list; i++)
      printf("%s\n", nama[i]);

}
/*
    pokemonHint.c
    2022-11-16
    Denta Bramasta
*/

#include <stdio.h>
int n = 6, id_temp;
typedef struct{
	int id;
	char nama[100], tipe[100];
	long int level, stat[3];
    int totalStat; // HP + ATK + DEF
} pokemonStatus;

void bubblesort(pokemonStatus pokemon[], int n, int selectedStat){
	// TODO
    int i, j, swapped;        // optimized with bool `swapped`:
   for (i = 0; i < n-1; i++) {
      swapped = 0;
      for (j = 0; j < n-i-1; j++) {
         if (pokemon[j].stat[selectedStat] < pokemon[j+1].stat[selectedStat]) { // compare pokemon index i and j 
            swap(&pokemon[j], &pokemon[j+1]);
            swapped = 1;
         }
         else if (pokemon[j].stat[selectedStat] == pokemon[j+1].stat[selectedStat] && pokemon[j].totalStat < pokemon[j+1].totalStat)
         {
            // TODO

         }
         else if(pokemon[j].totalStat == pokemon[j+1].totalStat && pokemon[j].id < pokemon[j+1].id)
      }
      if (swapped == 0)
         break;
   }
}


int main(){
	pokemonStatus pokemon[n];
	int i;
	for (i = 0; i < n; i++){
		scanf("%d %s %s %ld %ld %ld %ld",   &pokemon[i].id, pokemon[i].nama, pokemon[i].tipe, &pokemon[i].level, 
                                            &pokemon[i].stat[0], &pokemon[i].stat[1], &pokemon[i].stat[2]);
	        pokemon[i].totalStat = pokemon[i].stat[0] + pokemon[i].stat[1] + pokemon[i].stat[2];
    
    }
	bubblesort(pokemon, 6, 0); // Best HP
	bubblesort(pokemon, 6, 1); // Best ATK
	bubblesort(pokemon, 6, 2); // Best DEF
}
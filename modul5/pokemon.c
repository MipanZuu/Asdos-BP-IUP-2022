#include <stdio.h>
int n = 6, id_temp;
typedef struct{
	int id;
	char nama[100], tipe[100];
	long int level, stat[3]; // hp, atk, def;
} status;

void best_stat(status data[], int stat_choose, char stat[]){
	int i, stat_temp = -999, id_temp = 0;
	for (i = 0; i < 6; i++){
		if (stat_temp < data[i].stat[stat_choose]){
			stat_temp = data[i].stat[stat_choose];
			id_temp = i;
		}
		else if (stat_temp == data[i].stat[stat_choose]){
			if (data[i].stat[0] + data[i].stat[1] + data[i].stat[2] >= data[id_temp].stat[0] + data[id_temp].stat[1] + data[id_temp].stat[2]){
				if (data[i].stat[0] + data[i].stat[1] + data[i].stat[2] == data[id_temp].stat[0] + data[id_temp].stat[1] + data[id_temp].stat[2]){
					if (data[i].id > data[id_temp].id){
						id_temp = i;
					}
				}
				else{
					id_temp = i;
				}
			}
		}
	}
	printf("Best Pokemon for %s is:\n%d \n%s \n%s \n%ld \n%ld %ld %ld\n",stat, data[id_temp].id, data[id_temp].nama, data[id_temp].tipe, data[id_temp].level, data[id_temp].stat[0], data[id_temp].stat[1], data[id_temp].stat[2]);	
}

int main(){
	status data[n];
	int i;
	for (i = 0; i < n; i++){
		scanf("%d %s %s %ld %ld %ld %ld", &data[i].id, data[i].nama, data[i].tipe, &data[i].level, &data[i].stat[0], &data[i].stat[1], &data[i].stat[2]);
	}
	best_stat(data, 0, "HP");
	best_stat(data, 1, "ATK");
	best_stat(data, 2, "DEF");
}
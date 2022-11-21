#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Family {
    char name[100];
    int age;
    char phone[100];
    struct Family *friend;
} Family;

typedef struct Adrress {
    char address[100];
    Family family[5];
} Address;



int main(){
    int n;
    int m;
    scanf("%d", &n);
    Address address[50];
    int sizefam[50];
    for(int i = 0; i < n; i++){
        scanf("%s", address[i].address);
        getchar();
        scanf("%d", &m);
        sizefam[i] = m;
        for(int j = 0; j < m; j++){
            Family family;
            char name[100], phone[100];
            scanf("%s %d %s", name, &family.age, phone);
            getchar();
            strcpy(family.name, name);
            strcpy(family.phone, phone);
            address[i].family[j] = family;
        }
    }
    int many;
    scanf("%d", &many);
    for (int i = 0; i < many; i++) {
        char a[100],b[100];
        Family *friendA, *friendB;
        scanf("%s %s", a, b);
        int flag = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < sizefam[j]; k++) {
                // printf("%s\n", address[j].family[k].name);
                if(strcmp(address[j].family[k].name, b) == 0){
                    friendB = &address[j].family[k];
                    flag++;
                }
                if(strcmp(address[j].family[k].name, a) == 0){
                    friendA = &address[j].family[k];
                    flag++;
                }
            }
        }
        if (flag == 2) {
            friendA->friend = friendB;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s\n", address[i].address);
        for(int j = 0; j < sizefam[i]; j++){
            printf("Name: %s\nAge: %d\nPhone Number:%s\n", address[i].family[j].name, address[i].family[j].age, address[i].family[j].phone);
            if(address[i].family[j].friend != NULL){
                printf("His/Her bestie is: %s\nHis/Her contact info is as follows\nName: %s\nAge: %d\nPhone Number:%s\n", address[i].family[j].friend->name,
                address[i].family[j].friend->name,address[i].family[j].friend->age,address[i].family[j].friend->phone);
            }
            else{
                printf("His/Her bestie is: No one\n");
            }
            puts("");
        }
    }
}
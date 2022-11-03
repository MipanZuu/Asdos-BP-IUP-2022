int main(){
    int t;
    scanf("%d", &t);
    int decrypting;
    scanf("%d", &decrypting);
    if (decrypting != 0 && decrypting != 1){
        printf("Mode is not valid!");
        return 0;
    }
    int key;
    scanf("%d", &key);
    char temp;
    scanf("%c", &temp);
    char M[1000];
    scanf("%[^\n]", &M);
    // printf("%d %d %d %s", t, encrypting, key, M);
    
    
    key = fibo(key, 1, 1);
    
    int Counter;

    for (Counter = 0; Counter < strlen(M); Counter += 1){
        char Letter;
        Letter = M[Counter];
        
        if (decrypting){
            if(Letter >=97 || Letter <= 122){
                Letter -= key%26;
                if (Letter < 97){
                    Letter += 26;
                }
            }
            else if(Letter >= 65 || Letter <= 90){
                Letter -= key%26;
                if (Letter < 65){
                    Letter += 26;
                }
            }
        }
        else{
            if(Letter >=97 || Letter <= 122){
                Letter += key%26;
                if (Letter > 122){
                    Letter -= 26;
                }
            }
            else if(Letter >= 65 || Letter <= 90){
                Letter -= 65;
                Letter += key%26;
                Letter += 65;
                if (Letter > 90){
                    Letter -= 26;
                }
            }
        }
        M[Counter] = Letter;
    }
    printf("%s", M);
    
    return 0;
    
}

/*
    maxnmin.c
    2022-11-14
    Denta Bramasta
*/

#include <stdio.h>
#include <stdbool.h>

bool check(int mid, int array[], int n, int K);
int solve(int array[], int n, int K);

int main(){
    int n, k, i;
    
    scanf("%d",&n);
    scanf("%d",&k);
    
    int array[n] ;
    for( i = 0; i < n; ++i) {
         scanf("%d", &array[i]);
      }
       
    printf("%d", solve(array, n, k));
    return 0;
}

bool check(int mid, int array[], int n, int K)
{
    int count = 0;
    int sum = 0;
    int i ;
    for ( i = 0; i < n; i++) {
  
        if (array[i] > mid)
            return false;
  
        sum += array[i];

        if (sum > mid) {
            count++;
            sum = array[i];
        }
    }
    count++;
  
    if (count <= K)
        return true;
    return false;
}
  
int solve(int array[], int n, int K)
{
    int start = 1;
    int end = 0;
    int i;
  
    for ( i = 0; i < n; i++) {
        end += array[i];
    }

    int answer = 0;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (check(mid, array, n, K)) {
            answer = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
  
    return answer;
}
  
#include <stdio.h>

int main(){
    int score[10];

    for(int i=0; i<10; i++){
        printf("Enter score :");
        scanf("%d", &score[i]);
    }
    for(int j=0; j<10; j++){
        printf("%d ", score[j]);
    }

    return 0;
}
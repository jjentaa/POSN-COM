#include <stdio.h>

int main(){
    int score[10], sum=0, n_pass=0, counter=0;
    float avg;

    while(counter < 10){
        printf("Enter score of student No. %d :", counter+1);
        scanf("%d", &score[counter]);
        if(score[counter]>=0 && score[counter]<=100){
            counter++;
            if(score[counter]>=50){
                n_pass++;
            }
        }
    }
    
    printf("\n----------------\n");
    
    for(int j=0; j<10; j++){
        printf("%d ", score[9-j]);
        sum += score[j];
    }

    printf("\n----------------");

    avg = sum/10;

    printf("\nSum : %d", sum);
    printf("\nMean : %f", avg);

    printf("\n----------------");


    printf("\nNumber pass : %d", n_pass);
    printf("\nNumber pass : %d", 10-n_pass);

    return 0;
}
#include <stdio.h>

int main(){
    int size;
    printf("Enter size : ");
    scanf("%d", &size);

    int arr[size][size];
    int i=0, j=0;

    do{
        do{
            scanf("%d", &arr[i][j]);
            j++;
        }
        while(getchar()!=10);

        i++;
        j=0;
    }
    while(i<size);

    int all_sum[(size*2)+2];
    int index=0; //index for insert in all_sum

    int sum=0;
    //horizon
    for(int a=0; a<size; a++){
        for(int b=0; b<size; b++){
            sum+=arr[a][b];
        }
        all_sum[index] = sum;
        sum=0;
        index++;
    }

    //vertical
    for(int c=0; c<size; c++){
        for(int d=0; d<size; d++){
            sum+=arr[d][c];
        }
        all_sum[index] = sum;
        sum=0;
        index++;
    }

    //diagonal "\"
    for(int e=0; e<size; e++){
        sum+=arr[e][e];
    }
    all_sum[index] = sum;
    sum=0;
    index++;

    //diagonal "/"
    int row=size-1, col=0;
    for(int e=0; e<size; e++){
        sum+=arr[row][col];
        row--;
        col++;
    }
    all_sum[index] = sum;
    sum=0;
    index++;

    int n_pass=1; //counter for the same sum
    int init_sum=all_sum[0]; //initial sum for check

    //loop size of all_sum-1
    for(int q=1; q<(size*2)+2; q++){
        if(all_sum[q]==init_sum){
            n_pass++;
        }
    }

    if(n_pass==(size*2)+2){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
#include <stdio.h>

int main(){
    int n;
    printf("How many singers? ");
    scanf("%d", &n);

    int arr[n][n-1];
    int i=0, j=0;

    do{
        printf("Enter scores for Singer# %d : ", i+1);
        do{
            scanf("%d", &arr[i][j]);
            j++;
        }
        while(getchar()!=10);

        i++;
        j=0;
    }
    while(i<n);

    int all_sum[n];
    int sum=0, glo_max=0, n_win=0;
    for(int a=0; a<n; a++){
        sum=0;
        for(int b=0; b<n-1; b++){
            sum+=arr[a][b];
        }
        all_sum[a]=sum;
        if(all_sum[a]>glo_max){
            glo_max=all_sum[a];
        }
    }

    int winner[n];
    for(int q=0; q<n; q++){
        if(all_sum[q]==glo_max){
            winner[n_win]=q+1;
            n_win++;
        }
    }

    if(n_win==1){
        printf("The winner is Singer#%d!!", winner[0]);
    }
    else{
        printf("The winners are ");
        for(int u=0; u<n_win-1; u++){
            printf("Singer#%d & ", winner[u]);
        }
        printf("Singer#%d!! ", winner[n_win-1]);
    }

    printf("\nThe score is %d", glo_max);

    return 0;
}
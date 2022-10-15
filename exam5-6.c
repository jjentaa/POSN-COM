#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int size;
    printf("Size : ");
    scanf("%d", &size);
    int table[size][size];

    srand(time(NULL));

    int n_bomb=0;

    //create board
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            table[i][j]=rand()%2;
            if(table[i][j]==1){
                n_bomb++;
            }
        }
    }

    int bomb_arr[n_bomb*2]; //[x1, y1, x2, y2,...]

    int r=0;
    for(int a=0; a<size; a++){
        for(int b=0; b<size; b++){
            if(table[a][b]==1){
                bomb_arr[r]=a;
                r++;
                bomb_arr[r]=b;
                r++;
            }
        }
    }

    int point=0;
    int check=1;
    int x, y;
    //bomb=1 normal=0 already_input=2
    
    for(int z=0; z<size; z++){
        printf(" %d",z);
    }  
    printf("\n");

    for(int x=0; x<size; x++){
        printf("%d ", x);
        for(int y=0; y<size; y++){
            printf("* ");
        }
        printf("\n");
    }
    
    while(check==1){
        printf("Input : ");
        scanf("%d %d", &x, &y);

        //make tabel
        printf(" ");
        for(int w=0; w<size; w++){
            printf(" %d",w);
        }  
        printf("\n");
        for(int v=0; v<size; v++){
            printf("%d ", v);
            for(int u=0; u<size; u++){
                if(v==x && u==y && table[x][y]==1){
                    printf("1 ");
                }
                else if(v==x && u==y && table[x][y]==0){
                    printf("0 ");
                }
                else if(table[v][u]==2){
                    printf("0 ");
                }
                else{
                    printf("* ");
                }
            }
            printf("\n");
        }
        
        if(table[x][y]==1){
            printf("-----------------\n----Game Over----");
            printf("\nScore is %d \nBomb :", point);
            for(int u=0; u<n_bomb; u++){
                printf("(%d, %d) ", bomb_arr[(u*2)]+1, bomb_arr[(u*2)+1]+1);
            }
            check=0;
        }
        else if(table[x][y]==2){
            printf("You have already input it.");
        }
        else{
            if(point==((size*size)-n_bomb)){
                printf("You win!\nYour score is %d \nBomb :", point);
                for(int u=0; u<n_bomb; u++){
                    printf("(%d, %d) ", bomb_arr[(u*2)]+1, bomb_arr[(u*2)+1]+1);
                }
                check=0;
            }
            else{
                point++;
                table[x][y]=2;
            }
        }
        printf("\n");
    }

    return 0;
}
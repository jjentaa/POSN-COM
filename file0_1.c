#include <stdio.h>

int main(){
    
 	FILE  *fp, *fp2, *fp3;
    int j, a, b;
	fp = fopen("001.txt", "a");
    if(fp == NULL){
        printf("cannot read file1");
    }
    else{
        for(int i=0; i<10; i++){
            printf("Enter a number for file1 : ");
            scanf("%d", &j);
            fprintf(fp, "%d\n", j);
        }
        printf("Added to file success!\n");
    }
    fclose(fp);

    fp2 = fopen("002.txt", "a");
    if(fp2 == NULL){
        printf("cannot read file2");
    }
    else{
        for(int i=0; i<10; i++){
            printf("Enter a number for file2 : ");
            scanf("%d", &j);
            fprintf(fp2, "%d\t", j);
        }
        printf("Added to file success!\n");
    }
    fclose(fp2);

    fp = fopen("001.txt", "r");
    fp2 = fopen("002.txt", "r");
    fp3 = fopen("003.txt", "a");
    if(fp3 == NULL){
        printf("cannot read file3");
    }
    else{
        for(int u=0; u<10; u++){
            fscanf(fp, "%d\n", &a);
            fscanf(fp2, "%d\t", &b);
            fprintf(fp3, "%d\n", a+b);
        }
        printf("Added to file success!");
    }

    fclose(fp);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
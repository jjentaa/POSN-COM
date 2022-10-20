#include <stdio.h>
#include <string.h>

int isInside(int n_arr, char arr[n_arr][500], char target[500]){
    int j=0;
    while(j<n_arr){
        if(strcmp(arr[j], target)==0){
            break;
        }
        j++;
    }
    if(j==n_arr){
        return 0;
    }
    else{
        return 1;
    }
}

int checkNum(int n_arr, char arr[n_arr][500], char target[500]){
    int k=0;
    char num[2];
    char t[500];
    strcpy(t, target);

    while(isInside(n_arr, arr, t)!=0){
        k++;
        char num[2];
        strcpy(t, target);
        sprintf(num, "%d", k);
        strcat(t, "(");
        strcat(t, num);
        strcat(t, ")");
    }
    return k;
}

int main(){
    int n;
    printf("Enter number of file names : ");
    scanf("%d", &n);

    char f_name[500];
    char name[n][500];
    int a, b;
    char sth[2];
    char r[500];
    for(int i=0; i<n; i++){
        printf("Enter file name : ");
        scanf("%s", f_name);
        a = isInside(i, name, f_name);
        if(a==0){
            strcpy(name[i], f_name);
        }
        else{
            strcpy(r, f_name);
            b = checkNum(i, name, r);
            sprintf(sth, "%d", b); // int to string
            strcat(f_name, "(");
            strcat(f_name, sth);
            strcat(f_name, ")");
            strcpy(name[i], f_name);
        }
    }

    for(int m=0; m<n; m++){
        printf("%s ", name[m]);
    }

    return 0;
}
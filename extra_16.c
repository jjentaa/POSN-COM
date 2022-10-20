#include <stdio.h>

int isInside(char t, char arr[100], int n){
    int i=0;
    while(i<n){
        if(arr[i]==t){
            break;
        }
        i++;
    }
    if(i==n){
        return 0;
    }
    else{
        return 1;
    }
}

int countNum(char t, int ind, char arr[100]){
    int counter = 0;
    for(int o=0; o<=ind; o++){
        if(arr[o]==t){
            counter++;
        }
    }
    return counter;
}

int main(){
    char num[100];
    scanf("%s", num);
    char arr[100];
    int index=0;
    int a;
    int y=0;
    while(num[y]!='\0'){
        a = isInside(num[y], arr, index);
        if(a==0){
            arr[index]=num[y];
            index++;
        }
        y++;
    }

    for(int j=0; j<index; j++){
        printf("%c %d\n", arr[j], countNum(arr[j], y, num));
    }

    return 0;
}
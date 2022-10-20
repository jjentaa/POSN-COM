#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int counter[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char num[100];
    for(int i=n; i<=m; i++){
        sprintf(num, "%d", i);
        for(int j=0; num[j]!='\0'; j++){
            counter[num[j]-48]++;
        }
    }
    
    for(int y=0; y<10; y++){
        printf("%d %d\n", y, counter[y]);
    }

    return 0;
}
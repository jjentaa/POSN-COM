#include <stdio.h>

int main(){
    char obj[1000], target[1000];
    scanf("%s", obj);
    scanf("%s", target);

    char *i;
    char *j=target;
    int l, m=0;
    for(i=obj; *i!='\0'; i++){
        if(*i==*j){
            l=0;
            while(*(j+l)!='\0'){
                if(*(i+l) != *(j+l)){
                    break;
                }
                l++;
            }
            if(*(j+l)=='\0'){
                printf("%d", m+1);
                break;
            }
        }
        m++;
    }
    if(*(i+m+1)=='\0'){
        printf("0");
    }

    return 0;
}
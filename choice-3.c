#include <stdio.h>

int main(){
    char target[1000];
    gets(target);

    int counter=0, n_target=0;
    char *p;
    for(p=target; *p!='\0'; p++){
        n_target++;
    }

    p=target;
    for(int i=0; i<(n_target/2); i++){
        if(*(p+i)==*(p+(n_target-1-i))){
            counter++;
        }
    }
    
    if(counter == n_target/2){
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}
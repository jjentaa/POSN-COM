#include <stdio.h>
#include <string.h>

int main(){
    char id[20];
    char num[17];
    printf("Enter id : ");
    scanf("%s", id);
    
    int u=15;
    for(int i=0; i<strlen(id); i++){
        if(i==4 || i==9 || i== 14){
            continue;
        }
        else{
            num[u] = id[i];
            u--;
        }
    }

    // for(int l=0; l<16; l++){
    //     printf("%c", num[l]);
    // }

    int total=0;
    int y;
    for(int j=0; j<16; j++){
        y = num[j]-48;
        if(j%2==1){
            y *= 2;
            if(y>9){
                total += 1+(y%10);
            }
            else{
                total += y%10;
            }
        }
        else{
            total += y;
        }
    }

    if(total%10 == 0){
        printf("Bud mee Jing");
    }
    else{
        printf("Bud mai mee Jing");
    }

    return 0;
}
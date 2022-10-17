#include <stdio.h>
#include <string.h>

int main(){
    char str1[21];
    int counter=0;
    scanf("%s", str1);

    for(int i=0; i<strlen(str1); i++){
        switch (str1[i]){
            case 65:
                counter++;
                break;
            case 97:
                counter++;
                break;
            case 69:
                counter++;
                break;
            case 101:
                counter++;
                break;
            case 73:
                counter++;
                break;
            case 105:
                counter++;
                break;
            case 79:
                counter++;
                break;
            case 111:
                counter++;
                break;
            case 85:
                counter++;
                break;
            case 117:
                counter++;
                break;
        }
    }
    printf("%d", counter);

    return 0;
}
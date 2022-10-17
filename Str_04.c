#include <stdio.h>
#include <string.h>

int main(){
    char name[5][10]={"Messi", "C.Ronaldo", "Mbappe", "E.Haaland", "Max"};
    char name_sort[5][10]={"Messi", "C.Ronaldo", "Mbappe", "E.Haaland", "Mbaq"};
    int age[5]={35, 37, 23, 22, 34};

    int s=sizeof(name_sort)/sizeof(name_sort[0]);

    printf("Before Sort :\n");
    for(int k=0; k<s; k++){
        printf("%s ", name_sort[k]);
    }

    char temp[10];
    for(int i=0; i<(s-1); i++){
        for(int j=i+1; j<s; j++){
            if(strcmp(name_sort[i], name_sort[j])>0){
                strcpy(temp, name_sort[i]);
                strcpy(name_sort[i], name_sort[j]);
                strcpy(name_sort[j], temp);
            }
        }
    }
        
    printf("\n\nAfter Sort :\n");
    for(int k=0; k<s; k++){
        printf("%s ", name_sort[k]);
    }

    printf("\n\n-----Age Sort-----");
    char y[10];
    int t;
    for(int a=0; a<(sizeof(age)/4)-1; a++){
        for(int b=a+1; b<(sizeof(age)/4); b++){
            if(age[a]>age[b]){
                t = age[a];
                age[a] = age[b];
                age[b] = t;
                
                strcpy(y, name[a]);
                strcpy(name[a], name[b]);
                strcpy(name[b], y);
            }
        }
    }

    for(int c=0; c<(sizeof(age)/4); c++){
        printf("\n%s %d", name[c], age[c]);
    }
    
    return 0;
}
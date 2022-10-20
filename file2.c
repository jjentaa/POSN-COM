#include <stdio.h>

int main()
{
 	FILE  *fp;
    char all[2][3][10];

	fp = fopen("file.txt", "r");
	if (fp == NULL){ 
		printf("I can't read this file");
	}
    else{
        for(int j=0; j<3; j++){
            fscanf(fp, "%s %s", all[0][j] ,all[1][j]);
        }
        fclose(fp);

        fp = fopen("file.txt", "w");
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                fprintf(fp, "%s ", all[j][k]);
            }
            fprintf(fp, "\n");
        }
        printf("Transpose Success!");
    }
    fclose(fp);
    
    return 0;
}
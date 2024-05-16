#include <stdio.h>
#include "../inc/scrittura_file.h"

void scrittura_file(float* data){
	
	FILE *fp = NULL;

	fp = fopen("account.txt", "w");
	if(fp != NULL){
		for(int i = 0; i < INDEX; i++)
			fprintf(fp, "%.2f\n", data[i]);
		fclose(fp);
	}else
		printf("Errore apertura file\n");
}

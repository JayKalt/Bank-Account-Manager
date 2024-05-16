#include <stdio.h>
#include <stdlib.h>
#include "lettura_file.h"

float* lettura_file(){
	
	FILE *fp = NULL;
	float* data;
	
	data = (float*)malloc(sizeof(float) * INDEX);
	
	if(data == NULL)
		printf("ATTENZIONE: memoria NON liberata!\n\n\n");
	else{
		
		fp = fopen("account.txt", "r");
		
		if(fp){
			int i = 0;
			while(fscanf(fp, "%f", &data[i]) != EOF)
				i++;
			fclose(fp);
		}else
			printf("Errore apertura file!\n");
	}
	
	return data;
}

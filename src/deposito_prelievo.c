#include <stdio.h>
#include "../inc/headers.h"

#define INDEX 5

int deposito_prelievo(float* data, int choice, int field, float importo){
	
	if(choice == 1){
		data[field] += importo;
		data[INDEX - 1] += importo;
		return 1;
	}else{
		if(data[field] < importo)
			return 0;
		else{
			data[field] -= importo;
			data[INDEX - 1] -= importo;
			return 1;
		}
	}
	
}

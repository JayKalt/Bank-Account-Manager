#include <stdio.h>

#include "../inc/deposito_stipendio.h"
#include "../inc/scrittura_file.h"

#define INDEX 5

int deposito_stipendio(float* data, int* field, float ammount){

	for(int i = 0; i < INDEX - 1; i++){
		data[i] += (ammount / 100) * field[i];
		data[INDEX - 1] += (ammount / 100) * field[i];
	}
	scrittura_file(data);
	return 1;
}

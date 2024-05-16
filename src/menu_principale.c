#include <stdio.h>
#include "../inc/menu_principale.h"
#include "../inc/visualizza_menu.h"

int menu_principale(){
	
	int choice;
	
	// OUTPUT
	visualizza_menu();
	
	// CICLO DI ACQUISIZIONE DI CHOICE
	do{
		printf("\t> ");
		scanf("%d", &choice);	
	}while(choice > 4 || choice < 1);
	
	// RETURN AL MAIN
	return choice;
}

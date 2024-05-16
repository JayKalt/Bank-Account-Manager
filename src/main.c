#include <stdio.h>
#include <stdlib.h>

#include "../inc/benvenuto.h"
#include "../inc/lettura_file.h"
#include "../inc/menu_principale.h"
#include "../inc/mostra_account.h"
#include "../inc/aggiorna_account.h"
#include "../inc/nuova_entrata.h"
#include "../inc/scrittura_file.h"
#include "../inc/arrivederci.h"


int main(){
	
	int choice;
	float* data;	

	// 1. BENVENUTO
	system("clear");
	benvenuto();
	
	// 2. ACQUISIZIONE DELLE INFORMAZIONI
	data = lettura_file();
	
	// 3. MENU PRINCIPALE
	choice = menu_principale();
	
	// 4. CICLO SOTTOMENU
	while(choice != 4){
		system("clear");
		switch(choice){
			case 1:
				mostra_account(data);
				break;
			case 2:
				aggiorna_account(data);
				break;
			case 3:
				nuova_entrata(data);
				break;
			case 4:
				break;
		}
		system("clear");
		choice = menu_principale();
	}
	
	// 5. AGGIORNAMENTO INFORMAZIONI
	scrittura_file(data);
	free(data);
	data == NULL;
	
	// 6. ARRIVEDERCI
	arrivederci();
}

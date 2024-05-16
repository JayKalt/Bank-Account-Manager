#include <stdio.h>
#include <stdlib.h>

#include "../inc/header_aggiorna_account.h"
#include "../inc/deposito_prelievo.h"
#include "../inc/success.h"
#include "../inc/failure.h"


void aggiorna_account(float* data){
	
	int esito;
	int choice, field;
	float importo;
	
	// ACQUISIZIONE DELLE INFORMAZIONI
	
	header_aggiorna_account();
	printf("║                                    ║\n");
	printf("║    Operazione da eseguire:         ║\n");
	printf("║                                    ║\n");
	printf("║    1. deposito                     ║\n");
	printf("║    2. prelievo                     ║\n");
	printf("║                                    ║\n");
	printf("╚════════════════════════════════════╝\n\n");
	
	do{
		printf("\t> ");
		scanf("%d", &choice);	
	}while(choice > 2 || choice < 1);
	
	
	system("clear");
	header_aggiorna_account();
	printf("║                                    ║\n");
	if(choice == 1)
		printf("║    Dove desidera depositare?       ║\n");
	else
		printf("║    Da dove desidera prelevare?     ║\n");
	printf("║                                    ║\n");
	printf("║    1. Conto principale             ║\n");
	printf("║    2. Budget universitario         ║\n");
	printf("║    3. Liquidità complessiva        ║\n");
	printf("║    4. Liquidità mensile            ║\n");
	printf("║                                    ║\n");
	printf("╚════════════════════════════════════╝\n\n");
	
	do{
		printf("\t> ");
		scanf("%d", &field);	
	}while(field > 4 || field < 1);
	field--;
	
	
	system("clear");
	header_aggiorna_account();
	printf("║                                    ║\n");
	printf("║    Inserire importo:               ║\n");
	printf("║                                    ║\n");
	printf("╚════════════════════════════════════╝\n\n");
	
	printf("\t> ");
	scanf("%f", &importo);	
	
	// ELABORAZIONE
	esito = deposito_prelievo(data, choice, field, importo);
	
	// OUTPUT
	if(esito)
		success();
	else
		failure();

}

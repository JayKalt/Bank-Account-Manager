#include <stdio.h>
#include <stdlib.h>

#include "../inc/nuova_entrata.h"
#include "../inc/success.h"
#include "../inc/failure.h"
#include "../inc/deposito_stipendio.h"

void nuova_entrata(float* data){
	
	float ammount, confirm;
	int tot;
	int field[4];
	int esito;
	
	// ACQUISIZIONE INFORMAZIONI
	do{
		header_nuova_entrata();
		printf("║                                    ║\n");
		printf("║    Inserire importo:               ║\n");
		printf("║                                    ║\n");
		printf("╚════════════════════════════════════╝\n\n");
		printf("\t> ");
		scanf("%f", &ammount);
		system("clear");
		header_nuova_entrata();
		printf("║                                    ║\n");
		printf("║    Confermare importo:             ║\n");
		printf("║                                    ║\n");
		printf("╚════════════════════════════════════╝\n\n");
		printf("\t> ");
		scanf("%f", &confirm);
		system("clear");
	}while(ammount != confirm);
	
	
	do{
		tot = 0;
		header_nuova_entrata();
		printf("║                                    ║\n");
		printf("║    Come gradisce spartire          ║\n");
		printf("║    l'importo (in percentuale)?     ║\n");
		printf("║                                    ║\n");
		printf("║    %.2f			     ║\n", ammount);
		printf("║                                    ║\n");
		printf("╚════════════════════════════════════╝\n\n");
		printf("\t1. Conto principale   : ");
		scanf("%d", &field[0]);
		printf("\n\t2. Spese universitarie: ");
		scanf("%d", &field[1]);
		printf("\n\t3. Liquidita          : ");
		scanf("%d", &field[2]);
		printf("\n\t4. Liquidita mensile  : ");
		scanf("%d", &field[3]);
		
		for(int i = 0; i < 4; i++)
			tot += field[i];

	}while(tot != 100);
	
	
	// ELABORAZIONE
	esito = deposito_stipendio(data, field, ammount);
	
	if(esito)
		success();
	else
		failure();
}

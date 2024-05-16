#include <stdio.h>
#include "../inc/mostra_account.h"

void mostra_account(float* data){
	
	// OUTPUT
	printf("╔════════════════════════════════════╗\n");
	printf("║  ACCOUNT                           ║\n");
	printf("╠════════════════════════════════════╣\n");
	printf("║                                    ║\n");
	printf("║    Conto principale:               ║\n");
	printf("║                                    ║\n");
	printf("║    %.2f			     ║\n", data[0]);
	printf("║                                    ║\n");
	printf("║                                    ║\n");
	printf("║    Budget universitario:           ║\n");
	printf("║                                    ║\n");
	printf("║    %.2f			     ║\n", data[1]);
	printf("║                                    ║\n");
	printf("║                                    ║\n");
	printf("║    Liquidità complessiva:          ║\n");
	printf("║                                    ║\n");
	printf("║    %.2f			     ║\n", data[2]);
	printf("║                                    ║\n");
	printf("║                                    ║\n");
	printf("║    Liquidità mensile:              ║\n");
	printf("║                                    ║\n");
	printf("║    %.2f			     ║\n", data[3]);
	printf("║                                    ║\n");
	printf("║                                    ║\n");
	printf("║    ----------------------------    ║\n");
	printf("║                                    ║\n");
	printf("║    Saldo complessivo:              ║\n");
	printf("║                                    ║\n");
	printf("║    %.2f			     ║\n", data[4]);
	printf("║                                    ║\n");
	printf("╚════════════════════════════════════╝\n\n");
	
	printf("╔════════════════════════════════════╗\n");
	printf("║  Press ENTER to go back...         ║\n");
	printf("╚════════════════════════════════════╝\n");

	getchar();
	getchar();
}

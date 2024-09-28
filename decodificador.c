#include <stdio.h>
#include <string.h>
#include "funcaoondas.c"
void separa_e_converte(char MENSAGEM_CIFRADA[], int B) {
    int LEN = strlen(MENSAGEM_CIFRADA);
    char PAR[3];
    char *endptr;
    char ENCERRAR[] = "00";
    int I, POS = 1; // pos = 1 para demais
    for (I = 0; I < LEN; I += 2) {
        PAR[0] = MENSAGEM_CIFRADA[I];
        PAR[1] = MENSAGEM_CIFRADA[I + 1];
        PAR[2] = '\0';
        //pos ++;
        int CONVERTEH2D = strtol(PAR, &endptr, 16); //CONVERS?O DE HEXADECIMAL PARA DECIMAL
        if (strcmp(PAR, ENCERRAR) == 0) {
        	break;
        } else {
        	if (func_val(POS, B) != 0){
        		printf("%c", CONVERTEH2D);
        		//printf("Pos: %2d -> X = %3d |\t%s - > \t%.3d - > \t%c\n", pos, func_val(pos, b), par, converteh2d, converteh2d);
			}
            
        }
        POS++; 
    }
}
/*int main() {
	char texto_1[100] = "566F6388732073C66F2076656E6365646F867265732C20766F63C3887320636FBE6E73656775656D2E002DC6C921B7B87FCF"; // x = 1, b = 0
	char texto_2[100] = "5465636E6F336C6f67696120646120496E666f726D6187C66F2E003333333333333333333333333333333333333333333333"; // x = 1, b = 3
    char texto_3[100] = "566F6388732073C66F2076656E6365646F867265732C00566F6388732073C66F2076656E6365646F867265732C00332C2C2C"; // x = 2, b = 0
    char texto_4[100] = "566F638873C320636F6E73656775656D2E002DC6C921B7B87FCF566F638873C320636F6E73656775656D2E002DC6C921B7B8";
    //Separa_e_Converte(texto_1, 0);
    printf("\n");
    //Separa_e_Converte(texto_2, 3);
    Separa_e_Converte(texto_3, 0);
    //Separa_e_Converte(texto_4, 3);
    
    return 0;
}*/
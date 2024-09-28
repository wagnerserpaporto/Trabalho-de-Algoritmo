#include <math.h>
int func_val(int X, int B) {
    double VALORES_AS[] = {186.752, -148.235, 34.5049, -3.5091, 0.183166, -0.00513554, 0.0000735464, -4.22038e-7};
    double RESULT = 0.0;
    int I;
    for (I = 0; I < 8; I++) {
        RESULT += VALORES_AS[I] * pow(X, I);
    }
    RESULT += B * X;
    int RESULTADO_FINAL = round(RESULT);
    //printf("%d", resultf); verifica??o do resultado final
    return RESULTADO_FINAL;
}
/*void main(){
	// for gerado apenas para confirma??o de valores segundo novo vetor
	int i;
	for (i = 1; i < 100; i++){
		int resultado = func_val(i, 0);
		if(resultado != 0){
			printf("%2d\t%d\n", i, resultado);
		}
		
	}
}*/

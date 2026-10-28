/*Produtos 
Skol- R$5.0
Brahma- R$5.50
Antartica- R$4.50
Bohemia- R$4.80
Heineken- R$7.0
Budweiser- R$5.80
Furst- R$6.0
Amstel- R$4.90
Stela- R$7.50
Imperio - R$4.00
*/

//temp = temporario

#include <stdio.h>

int main() {
    float precos[10] = {5.00 , 5.50 , 4.50 , 4.80 , 7.00 , 5.80 , 6.00 , 4.90 , 7.50 , 4.00 };
    float temp;
    printf("Precos originais:\n");

    for (int i = 0 ; i < 10; i++)
        printf("%.2f\n", precos[i]);

    
    for (int i = 0; i < 9; i++) {
        for (int j =0; j < 9 -i; j++) {
            if(precos[j] > precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
        
    }    
    printf("Precos ajustados em ordem crescente:\n");
    for (int i = 0 ; i < 10; i++)
        printf("%.2f\n", precos[i]);
        
    //Ordem decrescente
    
    for (int i = 0; i < 9; i++) {
        for (int j =0; j < 9 -i; j++) {
            if(precos[j] < precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
        
    }    
    printf("Precos ajustados em ordem decrescente:\n");
    for (int i = 0 ; i < 10; i++)
        printf("%.2f\n", precos[i]);



        return 0;
}


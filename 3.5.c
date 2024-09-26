#include <stdio.h>

int main(){
    int nprod,prz,przs,sco;
    printf("Inserisci n prodotti: ");
    scanf("%d",&nprod);
    printf("Inserisci il prezzo unitario in euro: ");
    scanf("%d",&prz);
    if(prz>10){
        sco=prz*10/100;
        przs=prz-sco;
        printf("L'importo non scontato è %d euro\n",prz);
        printf("L'importo è %d euro\n",przs);
        printf("Il valore dello sconto è %d\n",sco);
    }
    else if(prz>50){
        sco=prz*10/100;
        przs=prz-sco;
        printf("L'importo non scontato è %d euro\n",prz);
        printf("L'importo è %d euro\n",przs);
        printf("Il valore dello sconto è %d\n",sco);
    }
    else{printf("L'importo non scontato è %d euro\n",prz);
        printf("Il valore dello sconto è %d\n",sco);}
    return 0;
}

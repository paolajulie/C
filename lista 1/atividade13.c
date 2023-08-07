//Calcule a área de uma pizza que possui um raio R (pi=3.14).

#include<stdio.h>
#include<stdlib.h>

 main () {
    float comprimento, r, area;
    printf("Digite o comprimento de sua pizza:\n");
    scanf("%f", &comprimento);
    r= comprimento/2;
    area= 3.14*(r*r);
    printf("a area da pizza e %.1f  %.1f", area, comprimento);



}

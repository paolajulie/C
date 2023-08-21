//Você foi contratado para desenvolver um sistema a ser usado em uma enquete. A empresa que o contratou precisa tabelar os resultados da seguinte enquete, feita a uma grande quantidade de organizações:
// Qual o melhor sistema operacional para uso em servidores? As possíveis respostas são: 1- Windows Server. 2 - Unix. 3 - Linux. 4 - Netware. 5 - Mac OS. 6 - Outro.
//O programa deverá ler os valores até ser informado o valor 0, que encerra a entrada dos dados. Não deverão ser aceitos valores além dos válidos para o programa (0 a 6).
//Após os dados terem sido completamente informados, o programa deverá calcular a percentual de cada um dos concorrentes.
// Ao final, devem ser mostrados todos os sistemas operacionais com a quantidade de votos e o percentual de cada um.

#include<stdio.h>
#include<stdlib.h>

main(){
    int grande, tgrande;
  float WindowsServer, Unix, Linux, Netware, MacOS, Outro;
 grande=99;
  while(grande>0){



 printf("Qual o melhor sistema operacional para uso em servidores? \n sendo : \n 1- Windows Server. \n 2 - Unix. \n 3 - Linux.  \n 4 - Netware. \n 5 - Mac OS. \n 6 - Outro \n");
 scanf("%d", &grande);


     if (grande==1){
      WindowsServer=WindowsServer+1;
      } else if(grande==2){
         Unix=Unix+1;
      } else if(grande==3){
         Linux=Linux+1;
     }   else if(grande==4){
         Netware=Netware+1;
    }   else if(grande==5){
         MacOS=MacOS+1;
    }   else if(grande==6){
        Outro=Outro+1;
    }   else if (grande<0){
         printf("voce digitou uma resposta invalida");
    }   else if(grande>6){
         printf("voce digitou uma resposta invalida");
    }
  }
  tgrande= WindowsServer+Unix+Linux+Netware+MacOS+Outro;
  printf("\n Total de votos: %d \n", tgrande);
  printf(" Sendo: \n WindowsServer %.f \n Unix %.f \n Linux %.f \n Netware %.f \n MacOS %.f \n Outro %.f \n", WindowsServer, Unix, Linux, Netware, MacOS, Outro );

  WindowsServer= (WindowsServer*100)/tgrande;
  Unix= (Unix*100)/tgrande;
  Linux= (Linux*100)/tgrande;
  Netware= (Netware*100)/tgrande;
  MacOS= (MacOS*100)/tgrande;
  Outro= (Outro*100)/tgrande;

  printf(" \n Suas porcentagens sao: \n Windows Server %.f porcento \nUnix %.f porcento \n Linux %.f porcento \n Netware %.f porcento \n MacOS %.f porcento \n Outro %.f porcento ", WindowsServer, Unix, Linux, Netware, MacOS, Outro);

}


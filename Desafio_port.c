#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int contar(char frase_um[]){


     char espaco[]="%[^\n]";
     char letra;
     char vogal;


     int total_frase;
     int conta_espaco=0;
     int i;

       

     total_frase = strlen(frase_um);
     printf("\nO total de caracteres na frase é de: %i\n", total_frase);

           for (i=0; i<(total_frase); i++){


            letra = frase_um[i];


                 if(letra ==' '){

                    conta_espaco = conta_espaco+1;
                 }


           }



        printf("Total de espaços: %i\n", conta_espaco);

}



int vog(char frase_dois[]){

    char vogais[10] ={'a','e','i','o','u','A','E','I','O','U'};
    int contar_vogais=0;
    int i;
    int j;
    char v,vg;


    for(i=0; i<100; i++){

        v = frase_dois[i];
        for (j=0; j<10; j++){

            vg = vogais[j];
            if(v == vg){

                contar_vogais++;
            }
        }
    }

    printf("Total de vogais: %i\n", contar_vogais);
    printf("\nOBS: palavras acentuadas não tem validade!.\n");
}




void main(){
    setlocale(LC_ALL, "");
   
   char frase[]=" ";
  
	 
        printf("Digite uma frase: ");
         scanf("%[^\n]s", &frase);
     
   
      contar(frase);
      vog(frase);
      
      
}






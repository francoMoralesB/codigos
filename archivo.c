#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *pf;
    
    pf = fopen("archivo.csv","w");
    if(pf!=NULL){
                 printf("\nEl archivo se creo correctamente");
                 printf("\nHolaaaaaaaa Mundoooooo")
                 exit(3);
                 }
                 puts("\nQue no se pudo crear el archivo");
                 
                 return 0;
    }

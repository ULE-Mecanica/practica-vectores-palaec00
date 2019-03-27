#include <stdio.h>
#define TAM 5
void cargar(int v[TAM]);
void compara(int v1[TAM],int v2[TAM]);
int main ()
  {
  int v1[TAM];
  int v2[TAM];
  cargar (v1);
  cargar (v2);
  compara(v1,v2);
  }
void cargar(int v[TAM]){
   int i;
    for(i=0;i<TAM;i++){
       scanf("%d",&v[i]);
}
}
void compara(int v1[TAM],int v2[TAM]){
    int i;
    int iguales=1;
      for(i=0;i<TAM;i++){
           if(v1[i]!=v2[i]){
              iguales=0;
          }
}
            if(iguales==0){
               printf("No son iguales");
}
                    else{
                       printf("Son iguales");
}
}


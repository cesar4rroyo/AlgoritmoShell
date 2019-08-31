//Ordenamiento de Shell

#include<conio.h>
#include<stdio.h>
void imprimir(int [],int n);

void shell(int [], int n);

int main(){
    int total;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d",&total);
    int num[total];
    for(int i=0;i<total;i++)
    {   printf("Ingrese numero %d:", i+1);
        scanf("%d",&num[i]);
            }
   shell(num,total);
   imprimir(num,total);
   getch();
}

void shell(int a[],int n)
{
    int salto, i, aux;
    bool bag;
    
    salto=n;
    while(salto>1)
    {
                  salto=salto/2;
                  bag=true;
                  
                  while(bag==true)
                  {
                         bag=false;
                         i=0;
                         while(i+salto<n){
                                          if(a[i]> a[i+salto])
                                          { aux=a[i];
                                            a[i]=a[i+salto];
                                            a[i+salto]=aux;
                                            bag=true;
                                          
                                          }
                         i++;
                                         }
                  }
    }
}
void imprimir(int a[],int n){
printf("Numeros ordenados de manera ascendente\n");

for(int i=0;i<n;i++){
   printf("%d - ",a[i]);
    }

}
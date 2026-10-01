#include<stdio.h>
int main()
{
 int x,i,som,min,max;
 float moy;
 printf("donner le premier entier:\n",i);
 scanf("%d",&x);
 som=x;
 min=x;
 max=x;
 for( i=2 ;i<=5;i++){
    printf("donner l'entier:\n");
    scanf("%d",&x);
    som=som+x;
 }
    if (x>max){
        max=x;
        }
    if (x<min){
        min=x;
    }
    moy=som/5;
    printf("la somme est:%d\n",som);
    printf("la moyenne est:%f\n",moy);
    printf("maximum est%d\n",max);
    printf("minimum est:%d\n",min);
    return 0;
}


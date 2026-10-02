#include<stdio.h>
int main()
{
    float prix,quan,pt;
    float ptr1,ptr2,ptr3;
    printf("donner le prix du produit:\n");
    scanf("%f",&prix);
    printf("donner la quantité:\n");
    scanf("%f",&quan);
    if (prix <=0 || quan <=0){
        printf("error, la quantité ou le prix est nul!");
    return 1;}
    pt=prix*quan;
    ptr1=pt-((pt*20)/100);
    ptr2=pt-((pt*10)/100);
    ptr3=pt-((pt*5)/100);
    if (pt>=500){
        printf("le prix avant la reduction est:%.1f\n",pt);
        printf("le prix apres la reduction est:%.1f et la pourcentage de reduction est (20 pourcent)",ptr1);
   }
    else if (pt>=300){
         printf("le prix avant la reduction est:%.1f\n",pt);
        printf("le prix apres la reduction est:%.1f et la pourcentage de reduction est (10 pourcent",ptr2);
    }
    else if (pt>=100){
        printf("le prix avant la reduction est:%.1f\n",pt);
        printf("le prix apres la reduction est:%.1f et la pourcentage de reduction est (5 pourcent)",ptr3);
    }
    return 0;
}

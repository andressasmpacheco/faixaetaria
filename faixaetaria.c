#include <stdio.h>
int main()
{
    int id;
     printf("Digite sua idade: \n\n");
    scanf("%d", &id);
    if (id<=12)
    {
       printf("\nInfantil. \n");
    }
    if (id>12 && id<18)
    {
       printf("\nAdolescente. \n");
    }
     if (id>=18 && id<60)
    {
       printf("\nAdulto. \n");
    }
    else
    {
        printf("\nIdoso. \n",id);
    }
    
}

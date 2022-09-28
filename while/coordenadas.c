#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite a coordenada x e y\n");
    scanf("%d %d", &x, &y);

    while(x != 0 || y != 0){   
        if(x>0 && y>0){
            printf("primeiro quadrante\n");
             scanf("%d %d", &x, &y);
        }else if(x<0 && y>0){
            printf("segunda quadrante\n");
             scanf("%d %d", &x, &y);
        }else if(x<0 && y<0){
            printf("Terceiro quadrante\n");
             scanf("%d %d", &x, &y);
        }else if(x>0 && y<0){
            printf("Quarto quadrante\n");
             scanf("%d %d", &x, &y);
        }else{
            break;
        }

    }
    
    return 0;
}
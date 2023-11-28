#include <stdio.h>
#include "math.h"

float addition(float n1, float n2){
    return n1 + n2;
}
float soustraction(float n1, float n2){
    return n1 - n2;
}
float multiplication(float n1,float n2){
    return n1 * n2;
}
float division(float n1, float n2){
    return n1 / n2;
}
float puissance(float n1, float n2){
    return pow(n1,n2);
}
float racineCarre(float n1){
    return sqrtf(n1);
}
float pourcentage(float n1, float n2){
    n2 = n2/100;
    return n1 * n2;
}

int main() {
    int choixOperation;
    int resultat;
    int OperationEnChaine;
    float nombre1;
    float nombre2;


    while (1){
        printf("Quel operation souhaiter vous faire ?\n");
        printf("1.Addition 2.Soustraction 3.Multiplication 4. Division 5. Puissance 6.Racine carre 7. Pourcentage 8. Quitter\n" );
        scanf("%d", &choixOperation);
        if(choixOperation == 1){
            printf("Entrez un nombre:\n");
            scanf("%f",&nombre1);
            printf("Entrez un nombre:\n");
            scanf("%f", &nombre2);
            addition(nombre1,nombre2);
            printf("Voici votre resultat:%f\n", addition(nombre1,nombre2));
            }

        if(choixOperation == 2){
            printf("Entrez un nombre:\n");
            scanf("%f",&nombre1);
            printf("Entrez un nombre:\n");
            scanf("%f", &nombre2);
            soustraction(nombre1,nombre2);
            printf("Voici votre resultat:%f\n", soustraction(nombre1,nombre2));
        }
        if(choixOperation == 3){
            printf("Entrez un nombre:\n");
            scanf("%f",&nombre1);
            printf("Entrez un nombre:\n");
            scanf("%f", &nombre2);
            multiplication(nombre1,nombre2);
            printf("Voici votre resultat:%f\n", multiplication(nombre1,nombre2));
        }
        if(choixOperation == 4){
            printf("Entrez un nombre:\n");
            scanf("%f",&nombre1);
            printf("Entrez un nombre:\n");
            scanf("%f", &nombre2);
            if(nombre1 == 0 || nombre2 == 0){
                printf("Operation impossible\n");
            }else{
                division(nombre1,nombre2);
                printf("Voici votre resultat:%f\n", division(nombre1,nombre2));
            }
        }
        if(choixOperation == 5){
            printf("Entrez un nombre:\n");
            scanf("%f",&nombre1);
            printf("Entrez un nombre:\n");
            scanf("%f", &nombre2);
            puissance(nombre1,nombre2);
            printf("Voici votre resultat:%f\n", puissance(nombre1,nombre2));

        }
        if(choixOperation == 6){
            printf("Entrez un nombre:\n");
            scanf("%f",&nombre1);
            if(nombre1 < 0){
                printf("Operation impossible\n");
            }else{
                racineCarre(nombre1);
                printf("Voici votre resultat:%f\n", racineCarre(nombre1));
            }
        }
        if(choixOperation == 7){
            printf("Entrez un nombre:\n");
            scanf("%f",&nombre1);
            printf("Entrez un nombre:\n");
            scanf("%f", &nombre2);
            pourcentage(nombre1,nombre2);
            printf("Voici votre resultat:%f\n", pourcentage(nombre1,nombre2));
        }
        if(choixOperation == 8){
            printf("Vous venez de quitter\n");
            break;
        }
        printf("Si vous voulez continuer 1 ou sinon 2:\n");
        scanf("%d", &OperationEnChaine);

    }
}

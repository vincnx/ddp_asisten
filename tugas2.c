# include <stdio.h>
# include <windows.h>

int main(){
    int input;

    while(input != 3){
        system("cls");
        printf("1. segitiga\n");
        printf("2. konversi\n");
        printf("3. exit\n");
        printf("masukkan input : ");
        scanf("%i", &input);
        system("cls");

        switch(input){
            case 1:
                int tinggi;
                printf("masukkan tinggi : ");
                scanf("%i", &tinggi);
                for (int i = 1; i <= tinggi; i++){
                    for (int j = tinggi - (i - 1); j > 0; j--){
                        printf("#");
                    }
                    printf("\n");
                }
                system("pause");
                break;
            case 2:
                float nominal;
                printf("masukkan nominal dalam satuan dolar : ");
                scanf("%f", &nominal);
                printf("nominal dalam dolar singapura  : %.3f\n", nominal * 1.35);
                printf("nominal dalam rupiah           : %.3f\n", nominal * 15.000);
                printf("nominal dalam euro             : %.3f\n", nominal * 0.9);
                printf("nominal dalam yen              : %.3f\n", nominal * 148);
                system("pause");
                break;
            case 3:
                printf("vincent exelcio\n");
                printf("672022070");
                break;
        }
    }
}
# include <stdio.h>
# include <math.h>
# include <windows.h>

int main(){
    float input;
    printf("=====================================================\n");
    printf("            Nama : Vincent Exelcio Susanto\n");
    printf("            Nim : 672022070\n");
    printf("            Kelas : DDP - G\n");
    printf("=====================================================\n");
    printf("        Selamat Datang Di Program Sin Cos Tan\n");
    printf("=====================================================\n");
    printf("masukkan angka : ");
    scanf("%f", &input);
    system("cls");
    printf("sin dari %.1f adalah : %.2f\n", input, sin(input));
    printf("cos dari %.1f adalah : %.2f\n", input, cos(input));
    printf("tan dari %.1f adalah : %.2f", input, tan(input));
}
#include <stdio.h>
 
int main() {
 
   float n1, n2, n3, n4, media, exame, mfinal;
   
   scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
   
   n1 = n1*2;
   n2 = n2*3;
   n3 = n3*4;
   n4 = n4*1;
   media = (n1+n2+n3+n4)/10;
   printf("Media: %.1f\n", media);
   
   if (media >= 7.0)
   printf("Aluno aprovado.\n");
    else if (media < 5.0)
        printf("Aluno reprovado.\n");
            else if (media >= 5.0 && media <= 6.9){
                printf("Aluno em exame.\n");
                scanf("%f", &exame);
                printf("Nota do exame: %.1f\n", exame);
                mfinal = (media+exame)/2;
          
                if (mfinal > 5.0){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", mfinal);
                }
                else {
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", mfinal);
                }
}
                
    return 0;
}
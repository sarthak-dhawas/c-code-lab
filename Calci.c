#include <stdio.h>
int main() {
int x;
float A, B;
printf("1 = Addition \n2 = Substraction \n3 = Multiplication \n4 = Division");
printf("\nEnter your preference: ");
scanf("%d", &x);
printf("\nEnter numbers: ");
scanf("%f %f", &A, &B);
switch (x) {
    case 1:
        printf("Addition is: %.2f", A+B);
        break;
    case 2:
        printf("Substraction is: %.2f", A-B);
        break;
    case 3:
        printf("Multiplication is: %.2f", A*B);
        break;
    case 4:
        if (B!=0)
            printf("Division is: %.3f", A/B);
        else
            printf("Cannot be divided by 0");
        break;
    default :
        printf("Invalid Entry");
}
return 0;
}

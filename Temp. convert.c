#include<stdio.h>
float fahrenheit(float f_value) {
return (5.0/9.0) * (f_value - 32);
}

float celsius(float c_value) {
return (c_value * (9.0/5.0)) + 32;
}

int main() {

int temp;
float result_f, result_c, f_value, c_value;

printf("Convert Temperature in \n1. Fahrenheit to Celsius \n2. Celsius to Fahrenheit \nEnter your choice: ");
scanf("%d", &temp);

switch (temp) {
    case 1:
         printf("Enter temp in Fahrenheit: ");
         scanf("%f", &f_value);
         result_c = fahrenheit(f_value);
         printf("Temperature in Celsius is : %.2f C", result_c);
         break;
    case 2:
         printf("Enter temp in Celsius: ");
         scanf("%f", &c_value);
         result_f = celsius(c_value);
         printf("Temperature in Fahrenheit is : %.2f F", result_f);
         break;
    default:
         printf("Invalid Entry");
}

return 0;
}

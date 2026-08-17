#include <stdio.h>
int main () {

int original_num, reverse_num;

printf("Enter your number: ");
scanf("%d", &original_num);
reverse_num = 0;

while(original_num){

reverse_num = reverse_num * 10 + original_num % 10;
    original_num/=10;

}

printf("Reversed number: %d", reverse_num);

return 0;
}

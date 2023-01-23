#include <stdio.h>

int main() {

int i = 1;
int i2 = 1;
int j;
int i3;
printf("Fibonacci numbers are\n%d\n%d\n", i, i2);

for (int j = 0; j < 13; j++) {
i3 = i2;
i2 += i;
i = i3;

printf("%d\n", i2);
}
}

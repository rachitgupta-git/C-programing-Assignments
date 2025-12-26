#include <stdio.h>
int main() {
    float balance1,balance2;
    printf("Enter first acc. balance: ");
    scanf("%f",&balance1);
    printf("Enter second acc. balance: ");
    scanf("%f",&balance2);
    int isEqual=(balance1==balance2);
    int isFirstGreater=(balance1>balance2);
    int isSecondGreater=(balance2>balance1);
    printf("is both the balance equal? %d\n", isEqual);
    printf("the first balance greater? %d\n", isFirstGreater);
    printf("the second balance greater? %d\n", isSecondGreater);
    return 0;
}
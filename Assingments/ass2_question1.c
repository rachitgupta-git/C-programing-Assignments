#include <stdio.h>
int main() {
    char name[100];
    float basicSalary, hra, da, grossSalary, incomeTax, netSalary;
    printf("Enter The name of the employee: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    hra = 0.20 * basicSalary;           
    da = 0.10 * basicSalary;            
    grossSalary = basicSalary + hra + da;
    incomeTax = 0.05 * grossSalary;     
    netSalary = grossSalary - incomeTax;
    printf("\n--- Salary Slip ---\n");
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("Income Tax (5%%): %.2f\n", incomeTax);
    printf("HRA (20%%): %.2f\n", hra);
    printf("Gross Salary: %.2f\n");
    printf("DA (10%%): %.2f\n", da);
    printf("Net Salary: %.2f\n", netSalary);
    return 0;       
}

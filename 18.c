//WAP to calculate gross salary of an employee
#include <stdio.h>
int main() {
    float basic_salary, gross_salary, hra, da;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    // Calculate HRA (House Rent Allowance) and DA (Dearness Allowance)
    hra = 0.2 * basic_salary; // 20% of basic salary
    da = 0.5 * basic_salary;  // 50% of basic salary

    // Calculate gross salary
    gross_salary = basic_salary + hra + da;

    printf("The gross salary of the employee is: %.2f\n", gross_salary);

    return 0;
}

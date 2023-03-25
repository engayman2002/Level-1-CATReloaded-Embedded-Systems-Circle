#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ulli unsigned long long int

struct em
{
    int salary,bonus,deduc;
};

struct em in()
{
    struct em p;
    printf("Enter the Salary here : ");
    scanf("%d",&p.salary);
    printf("Enter the Bonus here : ");
    scanf("%d",&p.bonus);
    printf("Enter the deductions here : ");
    scanf("%d",&p.deduc);
    return p;
};



int main()
{
    struct em mohsen;
    struct em maged;
    struct em mariam;
    printf("This is Data for Mohsen\n");
    mohsen = in();
    printf("This is Data for Maged\n");
    maged = in();
    printf("This is Data for Mariam\n");
    mariam = in();

    printf("The Total Salary = %d\n",(mohsen.salary+maged.salary+mariam.salary));
    printf("The Total Bonus = %d\n",(mohsen.bonus+maged.bonus+mariam.bonus));
    printf("The Total Deductions = %d\n",(mohsen.deduc+maged.deduc+mariam.deduc));
    return 0;
 }

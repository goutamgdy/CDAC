#include<stdio.h>
#include<conio.h>

// netSalary
int main(){
    int basicSalary, totalSales;
    printf("Enter your salary: ");
    scanf("%d", &basicSalary);
    printf("Enter your sales: ");
    scanf("%d", &totalSales);
    float cummision,netSalary;
    if(totalSales >= 5000 && totalSales <=7000){
        cummision = (totalSales * 3) / 100;
    }
    else if(totalSales >= 7001 && totalSales <=10000){
        cummision = (totalSales * 5) / 100;
    }
    else if(totalSales >= 10001 && totalSales <=15000){
        cummision = (totalSales * 10) / 100;
    }
    else if(totalSales > 15000){
        cummision = (totalSales * 15) / 100;
    }
    netSalary = basicSalary + cummision;
    printf("Basic Salary: %\n", basicSalary);
    printf("Total Sales: %d\n", totalSales);
    printf("Cummision: %.2f\n", cummision);
    printf("Net Salary: %.2f", netSalary);
    return 0;
}
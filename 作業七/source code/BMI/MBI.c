#include <stdio.h>
#include <math.h>

int main(void) {
    double height,weight;
    
    printf("Enter your height(cm), weight(kg): ");
    scanf("%lf,%lf", &height, &weight); 

    double height_m = height / 100.0;
    double BMI = weight / pow(height_m, 2);

    printf("BMI=%.2f\n", BMI);
    printf("BMI<18.5 體重過輕\n");
    printf("18.5<=BMI<24 正常範圍\n");
    printf("BMI>=27 需留意身體健康\n");

    return 0;
}
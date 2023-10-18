#include<stdio.h>
#include <math.h>
int main(){
    float radius;
    printf("Enter a area of circle: ");
    scanf("%f",&radius);

    float area = M_PI * radius * radius;

    printf("area of a circle is %0.2f",area); 
}
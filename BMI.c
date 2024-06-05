#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("Take weight and height:");
    scanf("%f %f",&weight,&height);
    BMI= weight/(height*height);
    printf("BMI: %.1f\n", BMI);

    if (BMI>=0 && BMI<18.5)
    {
        printf("Underweight");
    }
    else if (BMI>=18.5 && BMI<=24.9)
    {
        printf("Normal Weight");
    }
    else if (BMI>=25.0 && BMI<=29.9)
    {
        printf( "Over Weight");
    }
    else {printf("Obese");}

    return 0;
}


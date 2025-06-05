//Practice Question 02::::

# include <stdio.h>
//area of circle
int main() {
    float pi = 3.14, radius, area;
    printf("Enter radius : ");
    scanf("%f", &radius);
    area = pi*radius*radius;//Formula
    printf("Area of circle is : %f", area);
    return 0;
}
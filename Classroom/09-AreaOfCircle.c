//9. Program to find the area of Circle.

# include <stdio.h>

int main(){
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);

    float area = 3.14*radius*radius;

    printf("Area of a circle is %f", area);
    return 0;
}
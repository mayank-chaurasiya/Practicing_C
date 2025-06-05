//Practice Question 24::::
//Write functions to calculate area of a square, a circle & a rectangle.

# include <stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length, float width);

int main() {
    int length, width;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    printf("Area is : %f", rectangleArea(length, width));

    
    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float radius) {
    return 3.14 * radius * radius;
}

float rectangleArea(float length, float width) {
    return length * width;
}
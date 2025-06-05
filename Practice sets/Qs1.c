//Practice Question 01::::
//find the area of square;

# include <stdio.h>
//area of Square:
int main() {
    int side;
    printf("Enter side : ");
    scanf("%d", &side);
    int area = side * side; //formulae
    printf("Area of Square is : %d", area);
    return 0;
}
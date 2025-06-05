//10. Program to find the perimeter of rectangle.

# include <stdio.h>

int main() {
    int length, width, perimeter;

    printf("Enter Length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);

    perimeter = 2*(length+width);
    printf("Perimeter of Rectangle with length %d & width %d is : %d", length, width, perimeter);
    return 0;
}
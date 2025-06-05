# include <stdio.h>
int main() {
    int length, width, perimeter;
    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the width : ");
    scanf("%d", &width);
    perimeter = 2*(length + width);
    printf("The Perimeter of rectangle is :%d", perimeter);
    return 0; 
}
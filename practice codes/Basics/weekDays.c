//Switch statement(Conditional operator)

# include <stdio.h>

int main() {
    int day; //1-Monday; 2-Tuesday; 3-Wednesday; 4-Thursday; 5-Friday; 6-Saturday; 7-Sunday
        printf("Enter day(1-7) : ");
        scanf("%d", &day);

switch (day) {
        case 1 : printf("Monday");
        break;
        case 2 : printf("Tuesday");
                break;
        case 3 : printf("Wednesday");
                break;
        case 4 : printf("Thursday");
                break;
        case 5 : printf("Friday");
                break;
        case 6 : printf("Saturday");
                break;
        case 7 : printf("Sunday");
                break;

default: printf("Please read the instructions above!");
        break;
}
        return 0;
}
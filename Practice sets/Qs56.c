//Practice Questions 56::::
//Enter address(house no, block, city, state) of 5 people.

# include <stdio.h>

struct people
{
    int house_no;
    int block;
    char city[100];
    char state[100];
};

int main() {
    int i, n;
    
    struct people p[10];

    printf("Enter the number of poeple: ");
    scanf("%d", &n);

//take input for the n people--
    for(i = 0; i < n; i++) {
        printf("\nEnter Address-- \n");

//house no--
        printf("Enter house no.: ");
        scanf("%d", &p[i].house_no);
//block
        printf("Enter block: ");
        scanf("%d", &p[i].block);
//city
        printf("Enter city: ");
        scanf("%s", p[i].city);
//state
        printf("Enter state: ");
        scanf("%s", p[i].state);
    }

//Display information:
    for(i = 0; i < n; i++) {
        printf("\nDisplaying address of corresponding people %d:\n", i+1);

        printf("House No. %d\n", p[i].house_no);
        printf("Block : %d\n", p[i].block);
        printf("city : %s\n", p[i].city);
        printf("state : %s\n", p[i].state);
    }

    return 0;
}

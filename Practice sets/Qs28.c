//Practice Question 28::::
//Write a function that prints Namaste if user is Indian & Bonjour if the user is French.

# include <stdio.h>

void indian();
void french();

int main() {
    int n;
    printf("choose your nationality: 1) INDIAN 2) FRENCH\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1 :    indian();
        break;
    case 2 :    french();
        break;
    
    default: printf("Please specify your Nationality among the above options only!!");
        break;
    }

    return 0;
}

void indian() {
    printf("NAMASTE!!");
}

void french() {
    printf("BONJOUR!!");
}
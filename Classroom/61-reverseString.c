# include <stdio.h>
# include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str) - 1;

    for(i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // strrev(str);

    printf("Reversed string: %s",str);

    return 0;
}
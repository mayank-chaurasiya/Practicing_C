# include <stdio.h>

int main() {
    for(int i=1; i<=7; i++) {
        if(i == 5) {
            break;
        }
        printf("%d \n", i);
    }

    return 0;
}
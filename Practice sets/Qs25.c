//Practice Question 25::::
//Print "Hello World" 5 times.

# include <stdio.h>

void printHW(int count);

int main() {
    int count;
    printf("Enter count : ");
    scanf("%d", &count);
    printHW(count);
    return 0;
}

//Recursive function
void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}
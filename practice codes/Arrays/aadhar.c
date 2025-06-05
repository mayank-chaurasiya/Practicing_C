# include <stdio.h>

int main() {
    int aadhar[3];

    //input 
    // int *ptr = &aadhar[0];

    for(int i=0; i<3; i++) {
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);   //instead of (ptr + i) we can use &aadhar[i]
    }

    //output
    for(int i=0; i<3; i++) {
        printf("%d index = %d\n", i, aadhar[i]);    //instead of (ptr + i) we can use aadhar[i]
    }

    return 0;
}
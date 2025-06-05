//Practice Question 20::::
//Print all the Odd numbers from 5 to 50.

# include <stdio.h>

int main() {
    for(int i=5; i<=50; i++) {
        // if(i % 2 == 0){
        //     continue;
        // }

        if(i % 2 != 0){
            printf("%d ", i);
        }
        else{
            continue;
        }
    }
    return 0;
}
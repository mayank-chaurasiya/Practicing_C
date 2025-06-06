//Homework set 07: a:
//In an array of numbers, find how many times does a number 'x' occurs

# include <stdio.h>

int main() {
    int n;
    printf("Enter the length of your numbers: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter your numbers: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Your entered numbers are : ");
    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }

    int x;
    printf("\nEnter the number you wanna count! : ");
    scanf("%d", &x);

    // int a = sizeof(nums) / sizeof(nums[0]);
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] == x) {
            count++;
        }
    }

    printf("%d occurs %d times in the array.\n", x, count);

    return 0;
}
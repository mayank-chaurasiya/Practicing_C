// 33. Sorting the Array elements..

# include <stdio.h>

int main() {
    int temp, n, num;

    int data[15];

    printf("Enter the number of data you want to input: ");
    scanf("%d", &n);

    printf("\nEnter the data : \n");
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    printf("\nYou want to sort data in : 1. Ascending order     2. Descending order \n\n");
    scanf("%d", &num);

    switch (num)
    {

//Ascending order--
    case 1:
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(data[i] > data[j]) {
                    temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
        break;

//Descending order--
    case 2:
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(data[i] < data[j]) {
                    temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
        break;
    
    default: printf("Please choose from the option!!");
        break;
    }

//Output::::
    if(num == 1) {
        printf("Sorted in Ascending order: \n\n");
        for(int i = 0; i < n; i++) {
            printf("%d\t", data[i]);
        }
    } else {
        printf("Sorted in Descending order: \n\n");
        for(int i = 0; i < n; i++) {
            printf("%d\t", data[i]);
        }
    }

    return 0;
}
# include <stdio.h>
int main(){
    float p, r, t, si;
    printf("Enter Principal, rate , time : ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p*r*t)/100;
    printf("The Simple interest is :%f", si);
    return 0;
}
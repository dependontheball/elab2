#include<stdio.h>
int main(){
    int max_num;
    int sum = 0;
    int n,nub=0;
    printf("Enter the maximum weight in kg: ");
    scanf("%d",&max_num);
    do
    {
        printf("Enter passenger's weight in kg: ");
        scanf("%d",&n);
        sum += n;
        nub += 1;
    } while (sum < max_num);
    if(max_num<sum){nub--;}
    printf("The elevator can carry %d passenger(s)",nub);

    }
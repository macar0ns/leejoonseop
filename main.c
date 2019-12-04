#include <stdio.h>

void print_lines(void)
{
    printf("------------ \n");
    printf("------------ \n");
}
int main(void)
{
    int i;
    print_lines();
    for (i = 0; i<5; i++)
        printf("%d의 제곱은 %d \n", i , i*i);
    print_lines();
    return 0;

    
    

}


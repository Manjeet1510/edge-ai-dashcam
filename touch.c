#include <stdio.h>

void record_init(void)
{
    printf("recording from main\n");
}

int main(void)
{
    record_init();
    return 0;
}

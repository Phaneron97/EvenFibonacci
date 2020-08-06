#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int oldNum = 0, newNum = 1, nextNum, total;

    for (int i = 1; i <= 10; i++)
    {
        if (fmod(newNum, newNum/2) == 0)
        {
            total += newNum;
        }

        printf("%d\n", newNum);

        nextNum = oldNum + newNum;
        oldNum = newNum;
        newNum = nextNum;
    }
    printf("total is %d", total);
}

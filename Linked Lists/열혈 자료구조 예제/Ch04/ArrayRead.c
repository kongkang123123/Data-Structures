// 윤성우의 열혈 자료구조 p.106
#include <stdio.h>

int main(void)
{
    int arr[10];
    int readCount = 0;
    int readData;
    int i;

    while(1)
    {
        printf("Input Number: ");
        scanf("%d", &readData);
        if(readData < 1)
        {
            break;
        }

        arr[readCount++] = readData;
    }

    for(i=0; i<readCount; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
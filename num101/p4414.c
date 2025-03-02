#include<stdio.h>
int main()
{
    int arr[3];
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 2 - i; j++) 
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    char letter[3];
    scanf("%c%c%c",&letter[0],&letter[1],&letter[2]);
    printf("%d %d %d",arr[(letter[0]-'A')],arr[(letter[1]-'A')],arr[(letter[2]-'A')]);
    return 0;
}
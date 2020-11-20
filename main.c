#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int height, i, lines_char = 1, spaces;
    char ch;
    printf("Choose the pyramid height \n");
    scanf("%d", &height);
    printf("Choose the Character you want to draw with : \n");
    scanf(" %c",&ch);
    spaces = height - 1;
    while(height > 0)
    {
        for(i = 0 ; i < spaces ; i++)
        {
            printf(" ");
        }
        for(i = 0 ; i < lines_char ; i++)
        {
            printf("%c", ch);

        }
        printf("\n");
        lines_char+=2;
        spaces--;
        height--;
    }
    return 0;
}

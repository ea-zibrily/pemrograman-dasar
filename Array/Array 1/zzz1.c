#include <stdio.h>

int main()
{
    int i;
    //deklarasi variabel int values dan char word tanpa ukuran data
    int values[] = {1,2,3,4,5,6,7,8,9};
    char word[] = {'H','e','l','l','o'};
    //menggunakan loop for
    for(i = 0; i < 9; ++i )
    {
        printf("values[%d] is %d\n", i, values[i]);
        printf("\n");
       
    }
    for(i = 0; i < 6; ++i )
    {
        printf("word[%d] is %c\n", i, word[i]);
    }
    return 0;
}
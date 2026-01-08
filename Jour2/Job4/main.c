#include <stdio.h>

char **sort(char **strs);

int main(void){
    char *arr[] = {"42", "clementine", "chat", NULL};
    char **sorted = sort(arr);

    for (int i = 0; sorted[i]; i++)
        printf("%s\n", sorted[i]);

    return 0;


}
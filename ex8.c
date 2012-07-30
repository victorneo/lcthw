#include <stdio.h>

int main(int argc, char* argv[]){
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Victor";
    char full_name[] = {
        'V', 'i', 'c', 't', 'o', 'r',
        'N', 'e', 'o', '\0',
    };

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of chars: %ld\n", sizeof(areas) / sizeof(int));
    printf("The size of full_name: %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}

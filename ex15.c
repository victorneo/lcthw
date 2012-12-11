#include <stdio.h>

void print(char **names, int *ages, int count);

void print(char **names, int *ages, int count){
    int i = 0;
    for(i = 0; i < count; i++){
        printf("%s is %d years old.\n",
            names[i], ages[i]);
    }
}

int main(int argc, char *argv[]){
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    for (i = 0; i < count; i++){
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    int *cur_age = ages;
    int **cur_name = names;

    // add to pointer and access value
    for (i = 0; i< count; i++){
        printf("%s is %d years old.\n",
            *(cur_name+i), *(cur_age+i));
    }

    printf("---\n");

    // using pointers with offset
    for(i = 0; i < count; i++){
        printf("%s is %d years old.\n",
            cur_name[i], cur_age[i]);
    }

    printf("---\n");

    // another of using pointers to access array elements
    for(cur_name = names, cur_age = ages;
            (cur_age - ages) < count;
            cur_name++, cur_age++){
        printf("%s lived %d years so far.\n",
            *cur_name, *cur_age);
    }

    printf("---\n");

    // reverse print names using pointers
    for(cur_name = names + count - 1; cur_name >= names; cur_name--){
        printf("%s\n", *(cur_name));
    }

    printf("---\n");
    print(names, ages, count);

    return 0;
}

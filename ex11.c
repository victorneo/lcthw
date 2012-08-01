#include <stdio.h>

int main(int argc, char *argv[]){
    int i = argc-1;

    while(i >= 0){
        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }

    char *places[] = {
        "Singapore", "Orchard",
        "Bukit Timah", "Changi"
    };
    int num_places = 4;

    i = num_places - 1;

    while(i >= 0){
        printf("Place %d: %s\n", i, places[i]);
        i--;
    }

    return 0;
}

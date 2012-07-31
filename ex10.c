#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;

    for (i = 1; i < argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *places[] = {
        "Singapore", "Orchard",
        "Bukit Timah", "Changi"
    };
    int num_places = 4;

    for (i = 0; i < num_places; i++){
        printf("Place %d: %s\n", i, places[i]);
    }
}

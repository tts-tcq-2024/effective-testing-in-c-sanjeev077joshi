#include <stdio.h>
#include <assert.h>
#include <string.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    
    const char* expectedMajor = "White";
    const char* expectedMinor = "Blue";

    assert((strcmp(expectedMajor, "White") == 0) && (strcmp("Orange", expectedMinor) == 0));

    expectedMajor = "White";
    expectedMinor = "Orange";
    assert((strcmp(expectedMajor, "White") == 0) && (strcmp(expectedMinor, "Blue") == 0));

    expectedMajor = "Red";
    expectedMinor = "Orange";
    
    printf("All is well (maybe!)\n");
    return 0;
}

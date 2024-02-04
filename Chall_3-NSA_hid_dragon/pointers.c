

#include <stdio.h>
#include <string.h>

int main() {
    printf("There is no flag here!!\n");
    printf("Gotta find it somewhere else...");
    char *flag1 = "FLAG{ghidra_is_useful}";

    // Reuse the flag
    size_t size_flag1 = strlen(flag1);

    return 0;
}



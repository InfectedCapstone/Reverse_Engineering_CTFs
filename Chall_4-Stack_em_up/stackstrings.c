#include <stdio.h>

/*
int main() {
    
char flag[]="FLAG{IsDebuggerPresent_is_an_antiDebug_technique}";

        printf("Do you know what stack strings are?");
        char

    return 0;
}
*/




int main() {
    char flag[] = "FLAG{do_not_ignore_hex}";

    printf("Do you know what stack strings are?");

    // Use the flag in some way to prevent it from being optimized away
    char *ptr = flag;
    char ch = *ptr;

    // You can also perform some operations on the characters in the flag
    for (int i = 0; flag[i] != '\0'; ++i) {
        flag[i] ^= 0x10;
    }

    // The flag variable is still in use, and the compiler is less likely to optimize it away

    return 0;
}
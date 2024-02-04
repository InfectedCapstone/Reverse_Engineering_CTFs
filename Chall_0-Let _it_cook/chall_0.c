#include <stdio.h>
#include <unistd.h>

int main() {
    // Loop three times
    char flag[]="ALF_{GleWmoct_er_oeveesrne_nigreegni }_";

    for (int loop = 0; loop < 38; ) {
        // Print three characters
        printf("%c%c%c",flag[loop++],flag[loop++],flag[loop++]);
        fflush(stdout); // Flush the output buffer

        // Wait for 2 seconds
        sleep(5);
    }

    return 0;
}

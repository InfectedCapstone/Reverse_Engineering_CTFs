#include <stdio.h>
#include <windows.h>
char flag[]="FLAG{IsDebuggerPresent_is_an_antiDebug_technique}";

int main() {
    
    if (IsDebuggerPresent()) {
        printf("A debugger is detected. So here is your flag:\n");
        printf("%s",flag);
    } else {
        printf("No debugger is detected.\n");
        printf("No Flag");
    }
    
    return 0;
}
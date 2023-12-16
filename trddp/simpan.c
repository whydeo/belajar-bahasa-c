#include <stdio.h>

#define ANSI_BACKGROUND_RED     "\x1b[41m"
#define ANSI_BACKGROUND_GREEN   "\x1b[42m"
#define ANSI_BACKGROUND_BLUE    "\x1b[44m"
#define ANSI_BACKGROUND_RESET   "\x1b[0m"

int main() {
    printf(ANSI_BACKGROUND_RED );

    return 0;
}

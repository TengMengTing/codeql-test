#include <stdio.h>

void win() {
    puts("flag{CSCE413_is_cool}");
}

int main() {
    char buf[16];
    puts("What is your name?");
    printf("%p\n", &buf);
    fgets(buf, 160, stdin);
    printf("Hello %sTheres nothing sneaky here at all!\n", buf);
}

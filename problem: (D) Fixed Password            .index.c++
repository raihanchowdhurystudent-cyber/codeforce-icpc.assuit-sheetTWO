#include <stdio.h>
int main() {
    int password;
    const int correctPassword = 1999;
    while (1) {
        scanf("%d", &password);
        if (password == correctPassword) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}

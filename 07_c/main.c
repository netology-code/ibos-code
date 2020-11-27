#include <stdio.h>

int main() {
    unsigned int permissions = 0b000u;
    char username[5] = {'u', 's', 'e', 'r', '\0'};
    char password[5] = {'p', 'a', 's', 's', '\0'};
    char nickname[5] = {'a', 'n', 'o', 'n', '\0'};

    printf("permissions: %d\n", permissions);
    printf("username: %s\n", username);
    printf("password: %s\n", password);

    printf("permissions: %p\n", &permissions);
    printf("username: %p\n", &username);
    printf("password: %p\n", &password);
    printf("nickname: %p\n", &nickname);

    nickname[5] = 'p';
    nickname[6] = 'a';
    nickname[7] = 's';
    nickname[8] = 's';
    nickname[9] = '\0';

    nickname[10] = 'r';
    nickname[11] = 'o';
    nickname[12] = 'o';
    nickname[13] = 't';
    nickname[14] = '\0';

    nickname[15] = 1;

    // для отладки
    // берём адрес, на который указывает nickname[0] и печатаем по байту:
    // %c - в виде символа, %d - в виде числа
    char *addr = &nickname[0];
    printf(
            "%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c %d%d%d%d\n",
            addr[0], addr[1], addr[2], addr[3], addr[4],
            addr[5], addr[6], addr[7], addr[8], addr[9],
            addr[10], addr[11], addr[12], addr[13], addr[14],
            addr[15], addr[16], addr[17], addr[18]
    );

    printf("permissions: %d\n", permissions);
    printf("username: %s\n", username);
    printf("password: %s\n", password);

    return 0;
}

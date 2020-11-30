#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// uninitialized
char buffer[256];
// initialized
char validLogin[] = "root";
char validPassword[] = "secret";

// text
int main() {
    // stack
    char login[16];
    char password[16];

    printf("please enter login\n");
    fgets(login, sizeof(login), stdin);

    printf("please enter password\n");
    fgets(password, sizeof(password), stdin);

    if (strcmp(validLogin, login) != 0) {
        printf("invalid login or password");
        return 1;
    }

    if (strcmp(validPassword, password) != 0) {
        printf("invalid login or password");
        return 1;
    }

    /* выделяем буфер из 24 символов для хранения команды */
    char command[24] = "ping ";
    /* буфер для хранения хоста, который нужно пропинговать */
    char host[16];

    printf("please enter host for ping\n");
    /* получаем от пользователя имя хоста */
    /* нужно ввести в консоли, например, ya.ru и нажать Enter */
    fgets(host, sizeof(host), stdin);

    /* отладочный вывод - печатаем команду */
    printf("command: %s\n", command);
    /* отладочный вывод - печатаем хост */
    printf("host: %s\n", host);

    /* добавляем к команде хост, при этом \0 в команде заменяется на первый символ из host */
    strcat(command, host);

    /* отладочный вывод - печатаем полную команду */
    printf("full command: %s\n", command);

    /* выполняем команду */
    system(command);

    return 0;
}

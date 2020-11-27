Для сборки в GCC без stack-protector'а:

`gcc -fno-stack-protector main.c -o main && ./main`

Остальные команды из лекции:
```shell
gcc -fstack-protector-all main.c -o main && ./main # обычная сборка и запуск со stack-protector'ом (включен по умолчанию)

clang main.c -o main && ./main # обычная сборка и запуск clang (выдаёт по умолчанию предупреждения)
```

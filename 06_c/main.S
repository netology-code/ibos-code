.data                      # секция данных
msg:                       # имя
  .ascii  "Hello, world\n" # текст в кодировке ascii
  .set len, . - msg        # длина текста в байтах (1 символ в ascii = 1 байту)
.text                      # секция кода
.globl _start
_start:                    # точка входа в программу (отсюда начнётся исполнение)
  mov     $1, %rax         # syscal linux (1 - write)
  mov     $1, %rdi         # file descriptor (1 - stdout)
  mov     $msg, %rsi       # указатель на строку
  mov     $len, %rdx       # длина строки в байтах
  syscall                  # системный вызов

  mov     $60, %rax        # syscal linux (60 - exit)
  mov     $0, %rdi         # exit code (0 - success)
  syscall                  # системный вызов


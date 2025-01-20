# class_db
A new Database Management System called EsgiDB.

## 🚀 About Me
- Rakulan SIVATHASAN 3SI4
- rsivathasan@myges.fr | s.rakulan04@gmail.com

## How to use
To deploy this project run
```bash
  make
```
Output:
```bash
  gcc -Wall -Wextra -g   -c -o src/main.o src/main.c
  gcc -Wall -Wextra -g -c src/repl.c -o src/repl.o
  gcc -Wall -Wextra -g -c src/btree.c -o src/btree.o
  gcc -Wall -Wextra -g -o sgbd src/main.o src/repl.o src/btree.o
```

Then
```bash
  ./sgbd
```
Output:
```bash
  Welcome to ESGI database.
  Usage : insert <id> <name> <email> / select.
  For exit : .exit
  db >
```

Run .help to get help.
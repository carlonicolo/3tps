#!/bin/bash

echo "Creo una cartella"
mkdir NewFolder
echo "\n"
echo "...mi sposto nella cartella appena creata"
cd NewFolder
pwd
echo "Creo il mio pirmo file hello.c"
touch hello.c
ls
cat ../helloWorld.c > hello.c
echo ""
echo "Compilo il programma hello.c"
gcc hello.c -o hello
echo ""
echo "Eseguo il programma hello"
./hello
echo ""
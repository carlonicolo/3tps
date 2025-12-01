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
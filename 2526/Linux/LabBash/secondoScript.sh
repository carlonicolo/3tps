#!/bin/bash

echo "Creo una cartella"
mkdir CplusplusFiles
echo "\n"
echo "...mi sposto nella cartella appena creata"
cd CplusplusFiles
pwd
echo "Creo il mio pirmo file calcolatrice.cpp"
touch calcolatrice.cpp
ls
cat ../calcolatrice.cpp > calcolatrice.cpp
echo ""
echo "Compilo il programma calcolatrice.cpp"
g++ calcolatrice.cpp -o calcolatrice
echo ""
echo "Eseguo il programma calcolatrice"
./calcolatrice
echo ""
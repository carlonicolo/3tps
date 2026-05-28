#!/bin/bash
# Nome del file da leggere
file="dati.txt"
# Verifica se il file esiste
if [ -f "$file" ]; then
  echo "Elaborazione di $file..."
  
  # Legge il file riga per riga
  while read linea; do
    echo "Letto: $linea"
    # Elaborazione opzionale, ad esempio:
    if [[ "$linea" == *"IMPORTANTE"* ]]; then
      echo " >> Trovata riga importante!"
      echo ""
    fi
  done < "$file"

  echo "Elaborazione completata."
else
  echo "File non trovato: $file"
  exit 1
fi
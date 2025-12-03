echo "Aggiornamento del sistema in corso..."
sudo apt update && sudo apt upgrade && sudo apt dist-upgrade
echo " "
echo "Data corrente: $(date)"
echo " "
# Data e ora formattata
data_corrente=$(date "+%Y-%m-%d %H:%M:%S")
echo "Timestamp: $data_corrente"
echo " "


# Verifica se il file esiste
if [ -f "tabellina.cpp" ]; then
    echo "Compilo tabellina.cpp..."
    g++ tabellina.cpp -o tabellina
    if [ $? -eq 0 ]; then
        echo "Compilazione completata con successo!"
        ./tabellina
    else
        echo "Errore nella compilazione!"
    fi
else
    echo "Il file tabellina.cpp non è presente nella directory corrente."
fi

echo "### Fine script ###"

#!/bin/bash

for file in *.txt; do
  echo "Elaborazione file $file"
  wc -l "$file"
  echo "-------"
done
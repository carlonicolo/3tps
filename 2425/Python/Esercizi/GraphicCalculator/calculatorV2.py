import tkinter as tk
from tkinter import messagebox
import math
import matplotlib.pyplot as plt
import numpy as np

# Funzioni
def press(key):
    """Aggiunge il valore premuto al campo di input."""
    entry_text.set(entry_text.get() + key)

def clear():
    """Cancella il campo di input."""
    entry_text.set("")

def backspace():
    """Cancella l'ultimo carattere inserito."""
    entry_text.set(entry_text.get()[:-1])

def calculate():
    """Calcola l'espressione inserita e mostra il risultato."""
    try:
        print("1 - " + entry_text.get())
        result = eval(entry_text.get())
        print("2 - ", result)
        entry_text.set(str(result))
    except Exception as e:
        messagebox.showerror("Errore", "Espressione non valida!")

def plot_first_degree():
    """Calcola e disegna una funzione di primo grado."""
    try:
        expression = entry_text.get()  # La funzione deve essere nel formato 'm*x+c'
        if "x" not in expression:
            raise ValueError("Deve essere presente la variabile 'x'.")

        expression = expression.replace("^", "**")
        x = np.linspace(-10, 10, 500)
        y = [eval(expression.replace("x", f"({xi})")) for xi in x]

        plt.plot(x, y, label=f'Funzione: {expression}')
        plt.axhline(0, color='black', linewidth=0.5)
        plt.axvline(0, color='black', linewidth=0.5)
        plt.grid(color='gray', linestyle='--', linewidth=0.5)
        plt.title('Funzione di Primo Grado')
        plt.xlabel('x')
        plt.ylabel('y')
        plt.legend()
        plt.show()
    except Exception as e:
        messagebox.showerror("Errore", "Inserisci una funzione valida con 'x'.")

def plot_second_degree():
    """Calcola e disegna una funzione di secondo grado."""
    try:
        expression = entry_text.get()  # La funzione deve essere nel formato 'a*x**2+b*x+c'
        if "x" not in expression:
            raise ValueError("Deve essere presente la variabile 'x'.")

        expression = expression.replace("^", "**")
        x = np.linspace(-10, 10, 500)
        y = [eval(expression.replace("x", f"({xi})")) for xi in x]

        plt.plot(x, y, label=f'Funzione: {expression}')
        plt.axhline(0, color='black', linewidth=0.5)
        plt.axvline(0, color='black', linewidth=0.5)
        plt.grid(color='gray', linestyle='--', linewidth=0.5)
        plt.title('Funzione di Secondo Grado')
        plt.xlabel('x')
        plt.ylabel('y')
        plt.legend()
        plt.show()
    except Exception as e:
        messagebox.showerror("Errore", "Inserisci una funzione valida con 'x'.")

# Configurazione della finestra principale
root = tk.Tk()
root.title("Calcolatrice")
root.geometry("500x600")
root.resizable(True, True)

# Variabile di input
entry_text = tk.StringVar()

# Campo di input
entry = tk.Entry(root, textvariable=entry_text, font=("Arial", 20), bd=10, insertwidth=4, width=20, justify="right")
entry.grid(row=0, column=0, columnspan=5)

# Pulsanti numerici e operatori
buttons = [
    ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
    ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
    ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
    ('C', 4, 0), ('0', 4, 1), ('.', 4, 2), ('+', 4, 3),
    ('=', 5, 0, 2), ('←', 5, 3)
]

# Creazione dinamica dei pulsanti
for button in buttons:
    text, row, col = button[:3]  # Prendi i primi tre elementi
    colspan = button[3] if len(button) > 3 else 1  # Colspan è il quarto elemento, se presente
    action = lambda x=text: press(x) if x != "=" else calculate()
    tk.Button(root, text=text, padx=20, pady=20, font=("Arial", 15), bg="lightgray", command=action).grid(
        row=row, column=col, columnspan=colspan
    )

# Pulsante per cancellare il campo
tk.Button(root, text="C", padx=20, pady=20, font=("Arial", 15), bg="red", fg="white", command=clear).grid(row=4, column=0)

# Pulsante per il backspace
tk.Button(root, text="←", padx=20, pady=20, font=("Arial", 15), bg="orange", fg="white", command=backspace).grid(row=5, column=3)

# Pulsanti avanzati per grafici
tk.Button(root, text="Primo Grado", padx=20, pady=20, font=("Arial", 12), bg="blue", fg="white", command=plot_first_degree).grid(row=6, column=0, columnspan=2)
tk.Button(root, text="Secondo Grado", padx=10, pady=20, font=("Arial", 12), bg="blue", fg="white", command=plot_second_degree).grid(row=6, column=2, columnspan=2)

# Esecuzione dell'applicazione
root.mainloop()

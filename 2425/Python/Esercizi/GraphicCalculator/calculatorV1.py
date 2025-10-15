import tkinter as tk
from tkinter import messagebox
import math

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
        result = eval(entry_text.get())
        entry_text.set(str(result))
    except Exception as e:
        messagebox.showerror("Errore", "Espressione non valida!")

def square_root():
    """Calcola la radice quadrata del valore inserito."""
    try:
        result = math.sqrt(float(entry_text.get()))
        entry_text.set(str(result))
    except Exception as e:
        messagebox.showerror("Errore", "Valore non valido per la radice quadrata!")

def square():
    """Calcola il quadrato del valore inserito."""
    try:
        result = float(entry_text.get()) ** 2
        entry_text.set(str(result))
    except Exception as e:
        messagebox.showerror("Errore", "Valore non valido per il quadrato!")

def log_base_10():
    """Calcola il logaritmo in base 10 del valore inserito."""
    try:
        result = math.log10(float(entry_text.get()))
        entry_text.set(str(result))
    except Exception as e:
        messagebox.showerror("Errore", "Valore non valido per il logaritmo!")

def percentage():
    """Calcola il valore percentuale del numero inserito."""
    try:
        result = float(entry_text.get()) / 100
        entry_text.set(str(result))
    except Exception as e:
        messagebox.showerror("Errore", "Valore non valido per il calcolo percentuale!")

# Configurazione della finestra principale
root = tk.Tk()
root.title("Calcolatrice")
root.geometry("400x520")
root.resizable(True, True)

# Variabile di input
entry_text = tk.StringVar()

# Campo di input
entry = tk.Entry(root, textvariable=entry_text, font=("Arial", 20), bd=10, insertwidth=4, width=17, justify="right")
entry.grid(row=0, column=0, columnspan=4)

# Pulsanti numerici e operatori
buttons = [
    ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
    ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
    ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
    ('C', 4, 0), ('0', 4, 1), ('.', 4, 2), ('+', 4, 3),
    ('=', 5, 0)  # Il pulsante "=" occupa tutta la riga
]

# Creazione dinamica dei pulsanti
for (text, row, col, *span) in buttons:
    action = lambda x=text: press(x) if x != "=" else calculate()
    tk.Button(root, text=text, padx=20, pady=20, font=("Arial", 15), bg="lightgray", command=action).grid(
        row=row, column=col, columnspan=span[0] if span else 1
    )

# Pulsante per cancellare il campo
tk.Button(root, text="C", padx=20, pady=20, font=("Arial", 15), bg="red", fg="white", command=clear).grid(row=4, column=0)

# Pulsante per il backspace (cancella un elemento alla volta)
tk.Button(root, text="←", padx=20, pady=20, font=("Arial", 15), bg="orange", fg="white", command=backspace).grid(row=5, column=1)

# Pulsanti avanzati
tk.Button(root, text="√x", padx=20, pady=20, width=20, font=("Arial", 15), bg="blue", fg="white", command=square_root).grid(row=1, column=4)
tk.Button(root, text="x²", padx=20, pady=20, width=20, font=("Arial", 15), bg="blue", fg="white", command=square).grid(row=2, column=4)
tk.Button(root, text="log10", padx=20, pady=20, width=20, font=("Arial", 15), bg="blue", fg="white", command=log_base_10).grid(row=3, column=4)
tk.Button(root, text="%", padx=20, pady=20, width=20, font=("Arial", 15), bg="blue", fg="white", command=percentage).grid(row=4, column=4)

# Pulsante per il calcolo
tk.Button(root, text="=", padx=20, pady=20, font=("Arial", 15), bg="green", fg="white", command=calculate).grid(row=5, column=0)

# Esecuzione dell'applicazione
root.mainloop()

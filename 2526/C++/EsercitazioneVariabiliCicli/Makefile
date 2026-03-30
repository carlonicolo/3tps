CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Esegue tutti gli esercizi
all: es1 es2 es3 es4 es5 es6

# Compila i singoli esercizi
es1: esercizio1.cpp
	$(CXX) $(CXXFLAGS) -o es1 esercizio1.cpp

es2: esercizio2.cpp
	$(CXX) $(CXXFLAGS) -o es2 esercizio2.cpp

es3: esercizio3.cpp
	$(CXX) $(CXXFLAGS) -o es3 esercizio3.cpp

es4: esercizio4.cpp
	$(CXX) $(CXXFLAGS) -o es4 esercizio4.cpp

es5: esercizio5.cpp
	$(CXX) $(CXXFLAGS) -o es5 esercizio5.cpp

es6: esercizio6.cpp
	$(CXX) $(CXXFLAGS) -o es5 esercizio6.cpp

# Pulisce i file eseguibili
clean:
	rm -f es1 es2 es3 es4 es5 es6

# Testa tutti gli esercizi
test: all
	@echo "=== Test Esercizio 1 ==="
	@echo -e "7\n15\n" | ./es1
	@echo "\n=== Test Esercizio 2 ==="
	@echo -e "85\n" | ./es2
	@echo "\n=== Test Esercizio 3 ==="
	@echo -e "12345\n" | ./es3
	@echo "\n=== Test Esercizio 4 ==="
	@echo -e "371\n" | ./es4
	@echo "\n=== Test Esercizio 5 ==="
	@echo -e "5\n" | ./es5
	@echo "\n=== Test Esercizio 4 ==="
	@echo -e "371\n" | ./es6
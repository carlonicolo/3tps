num1 = int(input("Inserisci un numero ed io conterò fino al numero al quadrato: "))
quadrato_num1 = num1*num1
quadrato_pow2 = num1**2

if(quadrato_num1 == quadrato_pow2):
    print("Sono uguali !!!")
    
for i in range(num1, quadrato_num1+1, 1):
    print(i)

print("***while***")
i = num1
while(i <= quadrato_num1):
    print(i)
    i = i + 1
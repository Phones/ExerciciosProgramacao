quant = int(input(""))

for i in range(quant):
    texto = input("")
    aux = texto[1:-2].split("m")
    quant_As = len(aux[0]) * len(aux[1][2:])

    print(f"k{'a' * quant_As}")
quant = int(input(""))

for i in range(quant):
	palavra1 = input("")
	palavra2 = input("")
	palavra_incompleta = input("")

	primeiro = palavra_incompleta.index("_")
	segundo = palavra_incompleta.rfind("_")

	if palavra1[primeiro] == palavra2[segundo] or palavra1[segundo] == palavra2[primeiro]:
		print("Y")
	else:
		print("N")
def check_tag(inicio, frase_lower):
    aux_inicio = inicio
    
    while aux_inicio > 0:
        print(aux_inicio)
        if frase_lower[aux_inicio] == ">":
            return False

        if frase_lower[aux_inicio] == "<":
            while inicio < len(frase_lower):
                print(frase_lower[inicio])
                if frase_lower[inicio] == ">":
                    return True
                inicio+=1

        aux_inicio-=1



while True:
    try:
        tag = input("").lower()
        newtag = input("")
        frase = input("")
        frase_lower = frase.lower()
        tam_tag = len(tag)


        cont = 0

        while True:
            inicio = frase_lower.find(tag)
            print(frase)
            # if cont == 5:
            #     break
            # cont+=1

            aux_inicio = inicio
            if inicio == -1:
                break
            
            
            if check_tag(inicio, frase_lower):
                frase_lower = frase_lower[:inicio] + newtag + frase_lower[inicio + tam_tag:]
                frase = frase[:inicio] + newtag + frase[inicio + tam_tag:]
            breakpoint()
        # print(frase)

    except EOFError:
        break
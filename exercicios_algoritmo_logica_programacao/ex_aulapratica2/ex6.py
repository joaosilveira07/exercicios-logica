autonomia = 12
vel_media = int(input("Qual foi a velocidade média na viagem? "))
tempo = int(input("Quanto tempo demorou para completar a viagem? "))
distancia = vel_media * tempo
consumo = distancia / autonomia

print(f"Velocidade média: {vel_media}.\nTempo gasto: {tempo}.\nDistância percorrida: {distancia}.\nCombustível consumido: {consumo:.2f}.")

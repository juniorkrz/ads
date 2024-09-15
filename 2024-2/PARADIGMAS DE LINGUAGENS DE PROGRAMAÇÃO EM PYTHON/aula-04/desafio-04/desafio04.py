# Desafio: Crie um jogo de advinhação
# Professor: Diego Barbosa Fontes
# 21/08/2024
# Sala 2

# Importando a lib random
import random

# Definindo as variáveis
max_tentativas = 5
numero_tentativas = 0

# Gerando um número aleatório
numero_secreto = random.randint(1, 100)

# Loop infinito
while True:
    # Recebendo a tentativa
    tentativa_atual = int(input(f"Tente adivinhar o número entre 1 e 100: ({numero_tentativas + 1}/{max_tentativas}) "))
    # Verificando se a tentativa foi correta
    if tentativa_atual == numero_secreto:
        # Se a tentativa foi correta
        print(f"Parabéns, você acertou o número! ({numero_secreto})")
        # Encerrando o programa
        break
    else:
        # Se a tentativa foi incorreta
        if tentativa_atual > numero_secreto:
            print("O número secreto é menor")
        else:
            print("O número secreto é maior")

    # Incrementando a tentativa
    numero_tentativas += 1

    # Verificando se o limite de tentativas foi atingido
    if numero_tentativas >= max_tentativas:
        print(f"Suas chances acabaram... O número secreto era {numero_secreto}")
        break
# Desafio: Crie um programa que simule uma caixa de supermercado.
# O usuário deve inserir o preço de cada item, e o programa deve perguntar se há mais itens.
# Quando não houver mais itens, o programa deve calcular e exibir o total, a quantidade de itens e a média de preços.

# Professor: Diego Barbosa Fontes
# 11/09/2024
# Sala 2


# Inicia uma lista para os items
items = []


while True:
    # Solicita o valor
    valor = int(input(f"Digite o valor do item {len(items) + 1}: "))

    # Adiciona o valor na lista
    items.append(valor)

    # Pergunta se quer continuar
    continuar = input("Deseja adicionar mais um item? (s/n): ")
    if continuar.lower() != "s":
        break


# Soma os valores
soma_total = 0
for i, valor in enumerate(items):
    print(f"{i + 1} - {valor}")
    soma_total += valor


# Calcula a media
media = soma_total / len(items)


# Mostra os resultados
print(f"Valor total: R$ {soma_total}")
print(f"Media de valor: R$ {media}")
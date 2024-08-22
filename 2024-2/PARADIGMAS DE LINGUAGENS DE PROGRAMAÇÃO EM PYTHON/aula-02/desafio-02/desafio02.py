# Desafio: Calculadora Personalizada
# Professor: Diego Barbosa Fontes
# 21/08/2024
# Sala 2


import os


# Definindo uma constante para um tamanho de linha padrão
TAMANHO_LINHA_PADRAO = 30


# Função para limpar a tela
def limpar_tela():
    os.system("cls")


# Função para desenhar uma linha na tela
def desenhar_linha(tamanho = TAMANHO_LINHA_PADRAO):
    print("=" * tamanho)


# Função para exibir o cabeçalho
def exibir_cabecalho():
    desenhar_linha()
    print("Calculadora Personalizada")
    desenhar_linha()


# Função para exibir o menu
def exibir_menu(opcoes):
    for i, opcao in enumerate(opcoes):
        print(f"{i + 1} - {opcao}")

    desenhar_linha()


# Função para obter um número válido da entrada do usuário
def obter_numero(mensagem):
    while True:
        limpar_tela()
        exibir_cabecalho()
        try:
            numero = int(input(mensagem))
            return numero
        except:
            print("Por favor, digite apenas números!")
            os.system("pause")


# Função para obter uma operação válida da entrada do usuário
def obter_operacao(operacoes_disponiveis):
    while True:
        limpar_tela()
        exibir_cabecalho()
        exibir_menu(operacoes_disponiveis)
        try:
            # Obtendo a entrada do usuário
            operacao = int(input("Escolha uma operação: "))
            # Validando a entrada
            if operacao == 0 or operacao > len(operacoes_disponiveis):# Caso o usuário digite uma operação inválida
                print(f"Operação inválida! Digite um número entre 1 e {len(operacoes_disponiveis)}.")
                os.system("pause")
                continue

            # Retornando a operação escolhida
            return operacao
        # Caso o usuário digite uma entrada inválida
        except:
            print("Por favor, digite apenas números!")
            os.system("pause")


# Função para somar
def somar(a, b):
    return a + b


# Função para subtrair
def subtrair(a, b):
    return a - b


# Função para multiplicar
def multiplicar(a, b):
    return a * b


# Função para dividir
def dividir(a, b):
    # Utilizando a função round para arredondar o resultado com duas casas decimais
    return round(a / b, 2)


# Função para exponenciar
def exponenciar(a, b):
    return a ** b


# Função principal
def inicio():
    # Operações disponíveis
    operacoes_disponiveis = [
        "Soma",
        "Subtração",
        "Multiplicação",
        "Divisão",
        "Exponenciação"
    ]

    # Loop principal para manter o programa em execução
    while True:
        # Limpando a tela ¯\_(ツ)_/¯
        limpar_tela()

        # Exibindo cabeçalho
        exibir_cabecalho()

        # Obtendo o primeiro número
        num_a = obter_numero("Digite o primeiro número: ")
        # Obtendo o segundo número
        num_b = obter_numero("Digite o segundo número: ")
        # Obtendo a operação desejada
        operacao_escolhida = obter_operacao(operacoes_disponiveis)

        # Realizando a operação desejada
        match operacao_escolhida:
            case 1:
                resultado = somar(num_a, num_b)
            case 2:
                resultado = subtrair(num_a, num_b)
            case 3:
                resultado = multiplicar(num_a, num_b)
            case 4:
                resultado = dividir(num_a, num_b)
            case 5:
                resultado = exponenciar(num_a, num_b)
            case _:
                resultado = "Não foi possível obter a operação desejada."

        # Exibindo resultado
        print(f"Resultado: {resultado}")

        # Verificando se o usuário deseja continuar realizando outras operações
        resposta = input("Deseja realizar outra operação? (sim/não): ")# Obtendo resposta do usuário
        # Validando se a resposta do usuário foi negativa
        if any(palavra in resposta.lower() for palavra in ["não", "nao"]):
            # Encerrando o programa
            print("Programa encerrado, até a próxima!")
            break

# Inicia o programa
inicio()
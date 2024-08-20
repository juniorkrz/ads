# Desafio: Criando um Sistema de Verificação de Cadastro
# Professor: Diego Barbosa Fontes
# 14/08/2024
# Sala 2


import os


# Lista para armazenar os usuários
usuarios = []


# Função para limpar a tela
def limpar_tela():
    os.system("cls")


# Função para desenhar uma linha na tela
def desenhar_linha(tamanho):
    print("=" * tamanho)


# Função para exibir o menu
def exibir_menu(opcoes):
    desenhar_linha(35)
    print("Sistema de Verificação de Cadastro")
    desenhar_linha(35)

    # Exibindo as opções utilizando um 'for loop'
    for i, opcao in enumerate(opcoes):
        print(f"{i + 1} - {opcao}")

    desenhar_linha(35)


# Função para validar se o nome fornecido é válido ou se o usuário já existe
def validar_usuario(nome):
    # Verificando se o nome é válido, evitando uma entrada vazia
    if not nome:
        print("Por favor, digite um nome válido!")
        return False

    # Verificando se o nome já está cadastrado com um 'for loop'
    for usuario in usuarios:
        nome_usuario = usuario.get("nome")# Obtendo o nome do usuário
        # Se o nome for encontrado na lista de usuarios, retorna False.
        if nome_usuario == nome:
            print(f"{nome} já está cadastrado, tente outro nome!")
            return False

    # Se o nome não for encontrado na lista, retorna True.
    return True


# Função para cadastrar usuários
def cadastrar_usuario():
    limpar_tela()
    desenhar_linha(35)
    print("Cadastrar Novo Usuário")
    desenhar_linha(35)
    # Loop para obter um nome válido
    # Enquanto o usuário não digitar um nome válido o loop será repetido
    while True:
        # Obtendo a entrada do usuário
        nome = input("Digite o nome: ")
        # Validando o nome fornecido
        usuario_valido = validar_usuario(nome)

        # Se o usuário for válido, o loop é encerrado
        if usuario_valido:
            break

    # Loop para obter uma idade válida
    # Enquanto o usuário não digitar uma idade válida o loop será repetido
    while True:
        # try/except para evitar erros no programa caso o usuário digite algo diferente de um número inteiro
        try:
            # Obtendo a entrada do usuário
            idade = int(input("Digite a idade: "))
            # Se a idade for válida, o loop é encerrado
            break
        except:
            print("Por favor, digite apenas números!")

    # Cadastrando o usuário caso ele possua 18 anos ou mais
    if idade >= 18:
        # Criando um dicionário para armazenar os dados do usuário
        usuario = {
            "nome": nome,
            "idade": idade
        }

        # Inserindo o usuário na lista de usuários
        usuarios.append(usuario)

        # Mensagem de sucesso
        print(f"{nome} foi cadastrado com sucesso!")
    else:
        # Se não, exiba uma mensagem com o erro
        print(f"Cadastro não pode ser realizado porque {nome} é menor de idade.")


# Função para exibir os cadastros
def exibir_cadastros():
    limpar_tela()
    desenhar_linha(35)
    print("Usuários Cadastrados")
    desenhar_linha(35)

    # Caso não existam usuários cadastrados
    if len(usuarios) == 0:
        print("Nenhum usuário foi cadastrado ainda!")
    # Exibindo usuários cadastrados
    else:
        # Exibindo os usuários cadastrados utilizando um 'for loop'
        for i, usuario in enumerate(usuarios):
            # Obtendo o nome do usuário
            nome = usuario.get("nome")
            # Obtendo a idade do usuário
            idade = usuario.get("idade")
            # Exibindo a mensagem com nome e idade
            print(f"{i + 1} - Nome: {nome}, Idade: {idade}")

        desenhar_linha(35)


# Função principal
def inicio():
    # Opções do menu
    opcoes = [
        "Cadastrar novo usuário",
        "Exibir cadastros",
        "Sair",
    ]

    limpar_tela()

    # Loop principal para manter o programa em execução
    while True:
        # Exibindo o menu
        exibir_menu(opcoes)

        # try/except para evitar erros no programa caso o usuário digite algo diferente de um número inteiro
        try:
            # Obtendo a opção escolhida pelo usuário
            opcao = int(input("Escolha uma opção: "))

            # Validando a opção escolhida
            # Cadastrar novo usuário
            if opcao == 1:
                cadastrar_usuario()
            # Listar usuários cadastrados
            elif opcao == 2:
                exibir_cadastros()
            # Sair do programa
            elif opcao == 3:
                print("Programa encerrado, até a próxima!")
                break
            # Caso o usuário digite um número inválido
            else:
                print(f"Opção inválida! Digite um número entre 1 e {len(opcoes)}.")
        # Caso o usuário digite uma entrada inválida
        except:
            print("Por favor, digite apenas números!")

        # Pausa o programa antes de limpar a tela
        os.system("pause")
        # Limpa a tela ¯\_(ツ)_/¯
        limpar_tela()

# Inicia o programa
inicio()
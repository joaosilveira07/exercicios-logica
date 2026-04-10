plano = int(input("Digite seu plano de trabalho: "))
sal_atual = float(input("Digite seu salário atual: "))

match plano:
    case 1:
        sal_novo = sal_atual * 1.1
        print(f"{sal_novo:.2f}")
    case 2:
        sal_novo = sal_atual * 1.15
        print(f"{sal_novo:.2f}")
    case 3:
        sal_novo = sal_atual * 1.2
        print(f"{sal_novo:.2f}")

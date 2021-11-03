CAR_VALUE = 60.00
KM_VALUE = 0.15

km = float(input("Quantidade de km percorridos: "))
days = int(input("Quantidade de dias que o carro foi alugado: "))

price = days * CAR_VALUE + km * KM_VALUE

print("Valor a ser pago: R$ {:.2f}".format(price))

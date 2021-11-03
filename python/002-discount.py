merchandise_value = float(input("Insira o valor da mercadoria: "))
discount_percentage = float(input("Insira o percentual de desconto: "))

discountValue = (merchandise_value * discount_percentage) / 100
price = merchandise_value - discountValue

print("Valor do desconto: R$ {:.2f}".format(discountValue))
print("Valor a ser pago: R$ {:.2f}".format(price))

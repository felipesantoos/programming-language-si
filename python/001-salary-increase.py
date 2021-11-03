salary = float(input("Insira o valor do salario: "))
percentage = float(input("Insira a porcentagem do aumento: "))

increase = (salary * percentage) / 100
new_salary = salary + increase

print("Valor do aumento: R$ {:.2f}".format(increase))
print("Valor do novo salario: R$ {:.2f}".format(new_salary))

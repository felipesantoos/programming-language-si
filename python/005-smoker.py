LOST_MINUTES = 10;
MINUTES_IN_A_DAY = 1440;
DAYS_IN_A_YEAR = 365;

cigarettes_quantity = int(input("Quantidade de cigarros fumados por dia: "))
years = int(input("Ha quantos anos fuma: "))

lost_days = (cigarettes_quantity * LOST_MINUTES) / MINUTES_IN_A_DAY
days_quantity = years * DAYS_IN_A_YEAR
lost_life_time = lost_days * days_quantity

print("Quantidade de dias perdidos: {:d}.".format(lost_life_time))

import math
base = float(input("base do retangulo: "))
altura = float(input("altura do retangulo: "))
area = base*altura
perimetro = 2*(base+altura)
diagonal = math.sqrt(base**2+altura**25)
print(f"AREA = {area:.4f}")
print(f"perimetro = {perimetro:.4f}")
print(f"diagonal = {diagonal:.4f}")
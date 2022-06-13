a=int(input("primeiro valor: "))
b=int(input("segundo valor: "))
c=int(input("terceiro valor: "))
if a<b and a<c:
    print(f"{a}")
elif b<a and b<c:
    print(f"{b}")
else:
    print(f"MENOR ={c}")
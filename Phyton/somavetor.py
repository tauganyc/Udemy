n=int(input("Quantos numeros serao digitados: "))
vet = [0 for x in range (n)]
for i in range(0,n):
    vet[i]=float(input("digite um numero: "))
print()
print("Valores= ",end="")
soma=0
for i in range(0,n):
    print(f"{vet[i]:.1f} ",end="")
    soma=soma+vet[i]
print()
print(f"soma = {soma:.2f}")
media=soma/n
print(f"media = {media}")
e=int(input("Qual a ordem da matriz? "))
mat: [[int]] = [[0 for x in range(e)] for x in range(e)]
negativos=0
for i in range (0,e):
    for j in range (0,e):
        mat[i][j]= int(input(f"Elemento [{i},{j}]: "))
        if mat[i][j]<0:
            negativos=negativos+1
print("Diagonal principal")
for i in range(e):
    print(f"{mat[i][j]} ",end="")
print(f"\nquantidade de negativos = {negativos}")

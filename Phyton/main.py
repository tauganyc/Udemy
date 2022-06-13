a=input("digite nome ")
if a!='':
    if len(a)<=4:
        print("nomecurto")
    elif len(a)<=6:
        print("nomenormal")
    elif len(a)>=8:
        print("nomegrande")
else:
    print("digite algo")
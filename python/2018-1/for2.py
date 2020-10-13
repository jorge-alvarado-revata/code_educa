s = "estamos desarrollando un codigo en python"
pos = 0
for x in s:
    if x == 'g':
        print("pos:", pos)
        break
    else:
        print("no es la letra")
    pos = pos + 1
print(len(s))

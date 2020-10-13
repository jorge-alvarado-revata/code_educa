N = int(input())
cant50 = N // 50
rest50 = N % 50
cant20 = rest50 // 20
rest20 = rest50 % 20
cant10 = rest20 // 10
rest10 = rest20 % 10
cant5 = rest10 // 5
rest5 = rest10 % 5
cant1 = rest5 // 1

print("billete 50:", cant50)
print("billete 20:", cant20)
print("billete 10:", cant10)
print("moneda 5:", cant5)
print("monedad 1:", cant1)

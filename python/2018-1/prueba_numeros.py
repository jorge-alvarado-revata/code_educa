import sys

x = 1 / 10
print(format(x, '.64f'))

if x > 0:
    print("continue fly")

i = int(x)

if i > 0:
    print("continue fly")

else:
    print("stop")

i = 12
print(i.bit_length())
print(sys.maxsize)

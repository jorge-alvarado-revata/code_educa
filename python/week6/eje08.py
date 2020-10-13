# invertir los valores de un array ( una lista )

s = [1, 2, 3, 4, 5, 6, 7]
n = len (s)
for i in range( n // 2):
    temp = s[i]
    s[i] = s[n - 1 - i]
    s[n-1-i] = temp

print(s)

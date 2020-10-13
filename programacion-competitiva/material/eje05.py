"""
ejercicio de elementary arithmetic

    input       |   output      |   Outcome
---------------------------------------------------
10+20-3030         10+20-3+030      Wrong answer
10+20-3030         10+20+30+30      Wrong answer
10+20-3030         10+20-3+0+30     ok
"""

s = input()
res = ''

for i in range(0, len(s)):
    res += s[i]
    if s[i] == '-':
        i += 1
        res += s[i]
        i+= 1
        while (i< len(s) and s[i] == '0'):
            res+='+0'
            i += 1
        if (i < len(s) and s[i] >= '1' and s[i] <= '9'):
            res+= '+'
        i -= 1
print(res, end='')

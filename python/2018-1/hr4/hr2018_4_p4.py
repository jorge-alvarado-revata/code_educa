def evaluadora(s):
    l = []
    l = [str(x) for x in s]
    balance = 0
    while len(l) > 0:
        token = l.pop(0)
        if token == '(':
            balance = balance+1
        elif token == ')':
            balance = balance-1
    if balance != 0:
        return False
    else:
        return True

print(evaluadora('((((((((()))))))))'))

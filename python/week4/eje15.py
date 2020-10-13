"""

Escriba un programa que solicite n que muestre la siguiente figura de acuerdo al input ingresado. Por ejemplo:

Input: 6
Output:
     +
    +++
   +++++
  +++++++
 +++++++++
+++++++++++

Input: 4
Output:
     +
    +++
   +++++
  +++++++

"""


# Input
n = int(input("n: "))

# while
i = 0                       # Inicializando Contador i
while i < n:

    j = n - i               # Inicializando Contador j
    while j > 1:
        print(' ', end='')
        j -= 1              # Incrementando Contador j

    j = 0                   # Inicializando Contador j

    while j < i + 1:
        print('+', end='')
        j += 1              # Incrementando Contador j

    j = 0                   # Inicializando Contador j

    while j < i:
        print('+', end='')
        j += 1              # Incrementando Contador j

    print()
    i += 1                  # Incrementando Contador i




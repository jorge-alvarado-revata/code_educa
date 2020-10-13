#calcular la cantidad de letras que aparecen en la frase con diccionarios

letter_counts = {}
for letter in "Mississippi":
     letter_counts[letter] = letter_counts.get(letter, 0) + 1

print(letter_counts)

# ordernado
letter_items = list(letter_counts.items())
letter_items.sort()
print(letter_items)
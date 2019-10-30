dna = input()
print(100 * (dna.upper().count('C') + dna.upper().count('G')) / len(dna))

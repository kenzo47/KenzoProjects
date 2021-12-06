import re, os, sys

names = open(os.path.join(sys.path[0], "babynames-clean.csv"), "r")

# Some regex characters: Carrot: ^Test -> If starts with Test
#                        Wildcard: . -> Matches any character
#                        Wildcard: .* -> Matches any characters many times
#                        Non-whitespace character: \S -> Matches any whitespace characters
#                        Non-whitespace character: \S+ -> Matches any whitespace characters, one or more times

# for line in names:
#     line = line.rstrip()
#     if re.search('^[A-z]*,', line):
#         print(line)

results = re.findall('^[A-z]*,g', names)
print(results)
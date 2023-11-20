import sys

print(len(set(y for x in map(lambda x: x.split(), sys.stdin.readlines()) for y in x)))

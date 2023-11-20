a = set(map(int, input().split()))
b = set(map(int, input().split()))
c = set(filter(lambda s: s in b, a))
print(*sorted(list(c)))

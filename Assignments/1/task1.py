lst: int = [1, 2, 3, 4, 5]

for i in range(len(lst)):
    print(lst[i], "->", end=" ")
    lst[i] = lst[i] * lst[i]
    print(lst[i])
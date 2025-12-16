def get_next_year(year):
    year[-1] += 1
    for ind in range(len(year) - 1, -1, -1):
        if year[ind] > 9:
            year[ind - 1] += 1
            year[ind] %= 10
    return year


year = [int(x) for x in input()]
year = get_next_year(year)
while len(set(year)) < len(year):
    year = get_next_year(year)
print("".join([str(y) for y in year]))

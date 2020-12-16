def mode_rec(n, array):
    if n <= 1:
        return (array[0], 1, array[0], 1)
    (mode_n, mode_c, cur_n, cur_c) = mode_rec(n - 1, array)
    n_val = array[n - 1]

    if cur_n == n_val:
        cur_c += 1
        if cur_c > mode_c:
            mode_n = cur_n
            mode_c = cur_c
    else:
        cur_n = n_val
        cur_c = 1

    return (mode_n, mode_c, cur_n, cur_c)

def mode(array):
    array.sort()
    return mode_rec(len(array), array)[0]

def main():
    n = int(input())
    a = []
    for i in range(n):
        a.append(int(input()))

    print(mode(a))

main()

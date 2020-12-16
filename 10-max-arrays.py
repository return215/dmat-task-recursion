def max_array(n, array):
    if n <= 1:
        return array[0]
    r = array[n - 1]
    l = max_array(n - 1, array)
    if r > l:
        return r
    else:
        return l

def main():
    n = int(input())
    a = []
    for i in range(n):
        a.append(int(input()))

    print(max_array(len(a), a))

main()

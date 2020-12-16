def gcd(a, b):
    if b == 0:
        return a
    if a > b:
        return gcd(b, a)
    return gcd(a, b - a)

def main():
    a = int(input())
    b = int(input())

    print(gcd(a, b))

main()


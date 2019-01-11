def solution(n):
    primes = [0, 0] + [1] * (n - 1)
    for index, number in enumerate(primes):
        if number:
            k = index * 2
            while k <= n:
                primes[k] = 0
                k += index
    return sum(primes)
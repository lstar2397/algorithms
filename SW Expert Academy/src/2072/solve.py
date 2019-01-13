for i in range(int(input())):
    answer = sum(filter(lambda x: x % 2, map(int, input().split())))
    print("#{} {}".format(i + 1, answer))
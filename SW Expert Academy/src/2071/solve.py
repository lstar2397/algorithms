for i in range(int(input())):
    answer = int(round(sum(map(int, input().split())) / 10))
    print("#{} {}".format(i + 1, answer))
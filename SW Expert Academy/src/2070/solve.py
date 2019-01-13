for i in range(int(input())):
    a, b = map(int, input().split())
    answer = "=" if a == b else ("<" if a < b else ">")
    print("#{} {}".format(i + 1, answer))
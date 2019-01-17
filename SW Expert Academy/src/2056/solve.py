for i in range(int(input())):
    s = input()
    year, month, day = map(int, [s[:4], s[4:6], s[6:]])
    answer = -1
    if 1 <= month and month <= 12:
        dayOfMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        if 1 <= day and day <= dayOfMonth[month - 1]:
            answer = "{}/{}/{}".format(str(year).zfill(4), str(month).zfill(2), str(day).zfill(2))
    print("#{} {}".format(i + 1, answer))
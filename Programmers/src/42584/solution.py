def solution(prices):
    answer = []
    for index in range(len(prices)):
        price = prices[index]
        for index2 in range(index + 1, len(prices)):
            price2 = prices[index2]
            if price2 < price:
                answer.append(index2 - index)
                break
        else:
            answer.append(index2 - index)
    return answer
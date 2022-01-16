t = int(input())
for i in range(t):
    x = int(input())
    highest_num = 0
    count = 0
    flag = True
    for j in range(len(str(x)) - 1):
        if count > 3:
            break
        else:
            if flag:
                x = str(x)
                pair = int(x[j]) + int(x[j + 1])
                current_num = int(x[0:j] + str(pair) + x[j+2:])
                if current_num >= highest_num:
                    highest_num = current_num
                    count = 0
                    flag = False
                else:
                    count += 1
                    flag = False
            else:
                x = str(x)
                pair = int(x[len(str(x)) -1 - j]) + int(x[len(str(x)) - j - 2])
                current_num = int(x[0:len(str(x)) - j - 2] + str(pair) + x[len(str(x)) - j:])
                if current_num >= highest_num:
                    highest_num = current_num
                    count = 0
                    flag = True
                else:
                    count += 1
                    flag = True
    print(highest_num)



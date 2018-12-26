# mylist = (('Z', 26), ('A', 1), ('B', 2), ('C', 3), ('D', 4), ('E', 5), ('F', 6), ('G', 7), ('H', 8), ('I', 9), ('J', 10), ('K', 11), ('L', 12), ('M', 13), ('N', 14), ('O', 15), ('P', 16), ('Q', 17), ('R', 18), ('S', 19), ('T', 20), ('U', 21), ('V', 22), ('W', 23), ('X', 24), ('Y', 25))


import re


def ColumnConverter(col):
    res = ""
    i = 0
    while col > 0:
        rem = col % 26
        if rem == 0:
            res += 'Z'
            i += 1
            col = (col // 26) - 1
        else:
            res += chr((rem - 1) + ord('A'))
            i += 1
            col = col // 26
    return "".join(reversed(res))


def base26Converter(col):
    res = 0
    for i in range(len(col)):
        res = (res * 26) + ord(col[i]) - ord('A') + 1
    return res


t = int(input())
while t != 0:
    string = input()
    search = re.match(r'R[0-9]{1,}C[0-9]{1,}', string)
    if search:
        row = 0
        col = 0
        i = 1
        while (i < len(string)) and (string[i] != 'C'):
            row = row*10 + int(string[i])
            i += 1
        i += 1
        while (i < len(string)):
            col = col*10 + int(string[i])
            i += 1
        print(ColumnConverter(col), end="")
        print(row)
    else:
        row = ''
        col = ''
        i = 0
        while i < len(string) and ord(string[i]) >= ord('A') and ord(string[i]) <= ord('Z'):
            col += string[i]
            i += 1

        while (i < len(string)):
            row += string[i]
            i += 1
        print("R", end="")
        print(row, end="")
        print("C", end="")
        print(base26Converter(col))
    t -= 1

a, b = map(int, input().split())
alphabet = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
            'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

chk = []
chkVal = 1
tempChk = 1
while (a != 0):

    chk.append(alphabet[a % b])
    a = int(a/b)


for i in range(1, len(chk)+1):
    print(chk[-i], end="")

from time import time


def speedtest(renum, num):
    rex = renum
    x1 = time()
    for x in range(num-1):
        print("tring", x+1, end='\r')
        rex *= renum
    x2 = time()
    return x2-x1


print(speedtest(2, 2**20))

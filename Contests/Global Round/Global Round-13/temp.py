import time

while(True):
    initial = time.time()
    k = 0
    a = 1
    while(k<10000000):
        a+=1
        k+=1
    # print(f"while time: {time.time() - initial} seconds")
    whiletime = time.time() - initial

    initial2 = time.time()
    a = 1
    for i in range(10000000):
        a+=1
    # print(f"for time: {time.time() - initial2} seconds")
    fortime = time.time() - initial2

    if(whiletime < fortime):
        print(f"{whiletime} : {fortime}")
        break

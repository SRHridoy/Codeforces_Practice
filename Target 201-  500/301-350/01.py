i = 1
while (i < 100):
    i += 1
    
    if (i < 5):
        continue
    elif (i <= 10):
        print(i)
    else:
        break

else:
    print("I am else While !")
a = int(input())
b = int(input())
c = int(input())

if a > b:
    if a > c:
        print("The largest number is", a)
    else:
        print("The largest number is", c)

else:
    if b > c:
        print("The largest number is", b)
    else:
        print("The largest number is", c)
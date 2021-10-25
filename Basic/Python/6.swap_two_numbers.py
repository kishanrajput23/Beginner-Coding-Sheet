a = int(input())

b = int(input())

print(f"The value of a is {a}")
print(f"The value of b is {b}")

a, b = b, a

print("After Swapping...")
print(f"The value of a is {a}")
print(f"The value of b is {b}")
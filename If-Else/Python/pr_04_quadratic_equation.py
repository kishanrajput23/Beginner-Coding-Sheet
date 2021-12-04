import math
print("Enter the coefficients ")
a = int(input("Enter the value of a "))
b = float(input("Enter the value of b "))
c = float(input("Enter the value of c "))

descriminant = b**2 - 4*a*c

if descriminant > 0:
    x1 = (-b + math.sqrt(descriminant)) / (2*a)
    x2 = (-b - math.sqrt(descriminant)) / (2*a)

    print("The roots are real and different")
    print(f"x1 = {x1}")
    print(f"x2 = {x2}")

elif descriminant == 0:
    x1 = -b / (2*a)
    print("The roots are real and same")
    print(f"x1 = x2 = {x1}")

else:
    real_part = -b / (2*a)
    img_part = math.sqrt(-descriminant) / (2*a)
    print("The roots are complex and different")
    print(f"x1 = {real_part} + {img_part} i")
    print(f"x2 = {real_part} - {img_part} i")
    
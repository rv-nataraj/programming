pi=3.14
diameter=float(input("Enter the diameter of the wheel (in cm): "))
revolutions=float(input("Enter the total revolutions: "))
distance=revolutions*pi*diameter
print("The distance travelled in cm is ",distance)
print("the distance travelled in meters is ",distance/100)
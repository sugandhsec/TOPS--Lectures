try:
    num1 = float(input("Enter number1: "))
    num2 = float(inpt("Enter number2: "))
    print(num1+num2)
except ValueError:
    print("Only Numbers allowed")
except NameError:
    print("Some other error")
except:
    print("Got any unfound error")

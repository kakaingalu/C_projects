import math
"""This is a commisssion calculator module"""

class Commission1:
    """The class of the module"""
    name = input("What's your name as per your ID? ")
    sales = int(input("Enter your sales:"))
    commission_per_sale = 30
    salary_per_sale = 1000
    salary = sales * salary_per_sale
    commission = salary * commission_per_sale / 100

    print("Hi {}, your total commission for this month is: {}".format(name, commission))

if __name__ == "__main__":
    Commission1()

# grocery cart 

item = str(input("\n\t Enter the Item name you want to purchase : "))
quantity = int(input("\n\t Enter How many units of the item :"))

if item == "tea":
    price = 19.99
elif item == "coffee":
    price = 24.99
elif item =="sugar":
    price = 9.99
else :
    price = 0

cost = price*quantity
print(f"\n\t Your total bill comes up to {cost}")




normal_ticket = 250

age = int(input("Enter your age: "))
day = input("Enter the current day: ")
time = input("enter the currnet time of the day (morning , afternoon , evening : )")

#price = normal_ticket

if day == "sunday" or day == "saturday":
	price = normal_ticket * 1.25
else :
	price = normal_ticket


if time == "morn":
	price = price
elif time == "afternoon":
	price = price * 1.10
elif time == "evening":
	price = price * 1.30 

	
if age < 5:
	price = price * 0.50
elif age > 60:
	price = price * 0.90

print("Final ticket price: " , price)














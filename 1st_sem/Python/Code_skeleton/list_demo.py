marks=['sachin',50,55,67,7,89]
my_marks=[]
for number in range(5):
    newmark=int(input("enter the marks"))
    my_marks.append(newmark)

print("list elements are:")
for i in range(my_marks):
    print(my_marks[i])


for i in range(range(my_marks)):
    sum=sum+my_marks[i]
    print("sum of list elements=", sum)
    
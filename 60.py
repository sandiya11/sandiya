n = int(input("\nEnter the Range:\n"))
i = 0
n1 = 0
n2 = 1
while(i <n):
           if(i <= 1):
                      Next = i
           else:
                      Next =n1 + n2
                      n1= n2
                      n2= Next
           print(Next)
           i =i+1

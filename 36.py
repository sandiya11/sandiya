s = "~`!@#$%^&*()_-+={}[]:;',.<>/?-+"
a=input("Enter the String\n")
count=0
for i in a:
  if i in s:
    count+=1
print(count)

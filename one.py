s = input("Enter the string")

count=[0] *26

for i in s:
    t = (ord(s[i]-97)%26)
    count[t]+=1


print(t)
print(chr(max(count)))


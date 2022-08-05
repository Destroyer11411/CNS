
# #########
# #Hill cipher
import numpy as np
pt = input("Enter the plain text ")
key = input("Enter the key ")
pt = pt.lower()
key = key.lower()
key = np.array([(ord(b)-97) for b in key]) #converting alphabets to ascii values

#converting the given text to lowercase

if(len(key)==4):
    size = 2
    keym = key.reshape(2,2)
if(len(key)==9):
    size = 3
    keym = key.reshape(3,3)
    
pt =([(ord(a)-97) for a in pt])

# loop to append extra characters
while(len(pt)%size!=0):
    pt.append("x")
pt = np.array(pt)
#splits the array into equal parts
ptm = np.array_split(pt,len(pt)/size)
print("Encrypted text is")
for a in ptm:
    a = a.reshape(size,1)
    encr = np.dot(keym,a)%26
    # for a in np.nditer(encr):
    #     print(chr(a+97),end=" ")

    for a in encr:
        print(chr(int(a)+97),end=" ")
#print()

pt=input("enter plain txt :")
key=input("enter key :")


pt=pt.lower()
key=key.lower()


pt=[ord(a)-97 for a in pt]
key = [ord(a)-97 for a in key]
i=0


while len(key)!=len(pt):
 key.append(key[i])
 i+=1
 if (i==len(key)):
  i=0
enc=[]                                        


print("encryption is :")
for i,j in zip(pt,key):
 res=(i+j)%26
 enc.append(res)
 print(chr(res+97),end="")
print()


print("decryption is :")
for i,j in zip(enc,key):
 res=(i-j)%26

 print(chr(res+97),end="")
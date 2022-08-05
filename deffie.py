

# Deffie Hellman
p=int(input("Enter the prime number:"))
g=int(input("Enter the primitive root:"))
a=int(input("Enter the private key of a:"))
b=int(input("Enter the private key of b:"))

x=int(pow(g,a,p))
y=int(pow(g,b,p))
ka=int(pow(y,a,p))
kb=int(pow(x,b,p))

print("Public key of a : ",x)
print("Public key of b : ",y)
print("Secret key of a : ",ka)
print("Secret key of b : ",kb)
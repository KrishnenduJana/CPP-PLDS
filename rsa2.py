#RSA Signature
import decimal
from Crypto.PublicKey import RSA

#Generate a 1024-bit RSA key-pair
keyPair = RSA.generate(bits=1024)
#print(f"Public key:  (n = {hex(keyPair.n)}, e = {hex(keyPair.e)})\n")
#print(f"Private key: (n = {hex(keyPair.n)}, d = {hex(keyPair.d)})\n")

# RSA sign the message
msg = b'Hi, I am Krishnendu'
from hashlib import sha512
hash = int.from_bytes(sha512(msg).digest(), byteorder='big')
signature = pow(hash, keyPair.d, keyPair.n)
print("Signature:", hex(signature))
print("S_Hash : ",hash)

# RSA verify signature
msg = b'Hi, I am Krishnendu'
hashFromSignature = pow(signature, keyPair.e, keyPair.n)
print("\nV_Hash : ",hashFromSignature)
print("\nSignature valid:", hash == hashFromSignature)

# RSA verify signature (tampered msg)
msg = b'Hi, I am Krish'
hash = int.from_bytes(sha512(msg).digest(), byteorder='big')
hashFromSignature = pow(signature, keyPair.e, keyPair.n)
print("\nS_HashT: ",hash)
print("\nV_HashT: ",hashFromSignature)
print("Signature valid (tampered):", hash == hashFromSignature)
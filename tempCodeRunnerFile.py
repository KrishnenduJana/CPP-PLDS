#Tempared the massage 
msgT="Krish"

D_T = int.from_bytes(hashlib.sha256(msgT.encode()).digest(),byteorder='big' )

v_2 = pow(g,D_T,p)      #The value of g^hash(altered msg)

print ("\nV_1=%s" % v_1)
print ("v_2=%s" % v_2)
print ("\nSignature (Tempered) : ", v_1==v_2)
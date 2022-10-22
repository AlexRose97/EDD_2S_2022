from hashlib import sha256

Data="informacionsasdfasdfasfasdf"
CadenaEvaludada=""
nonce=0
prefijo="00"

while True:
    nonce += 1
    CadenaEvaludada=Data+""+str(nonce)
    
    if(str(sha256(CadenaEvaludada.encode('utf-8')).hexdigest()).find(prefijo)==0):
        print(nonce, sha256(CadenaEvaludada.encode('utf-8')).hexdigest())
        break;
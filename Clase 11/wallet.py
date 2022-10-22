from eth_account import Account
import secrets
priv=secrets.token_hex(32);
priv_key = "0x"+priv;
print("llave privada, no se debe de compartir:", priv_key)
acct=Account.from_key(priv_key)
print("From wallet:",acct.address)
from smartapi import SmartConnect
import pyotp

Client_ID = "A98281"

#---------for smartExceptions---------
#import smartapi.smartExceptions
#or
#from smartapi import smartExceptions

smartApi =SmartConnect(api_key="v57OWIFq") # Trading API : 'zH2z8Wvu', LiveData API : 'v57OWIFq'
login = smartApi.generateSession(Client_ID, '7325', pyotp.TOTP("XHGBUHYW2NOSVV52PWDM3CVNQU").now())
refreshToken = login['data']['refreshToken']
feedToken = smartApi.getfeedToken()
print(feedToken)

Profile = smartApi.getProfile(refreshToken)
print(Profile)
print(" ------------------- Profile     ---------------------------\n")

feedToken = smartApi.generateToken(refreshToken)

# ## Websocket Programming

from smartapi import SmartWebSocket
import multiprocessing

print("=================== FEED_TOKEN ===================")
FEED_TOKEN=feedToken
print("=================== FEED_TOKEN ===================\n")

print("=================== CLIENT_CODE ===================")
CLIENT_CODE = Client_ID
print("=================== CLIENT_CODE ===================\n")

token="nse_cm|2885&nse_fo|35003"
task="mw"

ss = SmartWebSocket(FEED_TOKEN, CLIENT_CODE)
print(ss)

def on_open(ws):
    print("on open")
    ss.subscribe(task,token)

def on_message(ws, message):
    print("Ticks: {}".format(message))

def on_error(ws, error):
    print(error)

def on_close(ws, code, reason):
    ws.stop()

# Assign the callbacks.
ss._on_open = on_open
ss.on_ticks = on_message
ss.on_connect = on_error
ss.on_close = on_close

p1 = multiprocessing.Process(target = ss.connect)
p1.start()
print(p1)
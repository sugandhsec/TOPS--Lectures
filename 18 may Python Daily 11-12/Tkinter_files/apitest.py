import requests
# 2efcb1475da327f09164daaace231821
# 
# lat = 21.170240
# lon = 72.831062
# url = f"https://api.openweathermap.org/data/2.5/weather?lat={lat}&lon={lon}&appid=2efcb1475da327f09164daaace231821"


# response = requests.get(url)
# print(response)
# print(response.json())
# mydata=response.json()
# print(mydata["city"])

import requests

url = "https://api.countrystatecity.in/v1/countries/PK"

headers = {
    'X-CSCAPI-KEY': 'UXF2OHQ2WjBMT1Y5Q05MQzVhNE1sT3VJSk02Y3BaNzlRNHRVMHRjZA=='
}

response = requests.request("GET", url, headers=headers)

print(response.json())

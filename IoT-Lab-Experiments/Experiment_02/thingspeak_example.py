import requests
API_KEY = 'YOUR_API_KEY'
data = {'field1': 25}
requests.post(f'https://api.thingspeak.com/update?api_key={API_KEY}', data=data)
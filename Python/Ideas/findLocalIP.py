# THROUGH python requesting


# import re
import requests

print ("We will try to open this url, in order to get IP Address")
url = "http://checkip.dyndns.org"
print (url)
request = requests.get(url)
clean = request.text.split(': ', 1)[1]
your_ip = clean.split('</body></html>', 1)[0]

print("Congrats! Your IP Address is: ", your_ip)




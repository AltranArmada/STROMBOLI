from scapy.all import *
from lxml import etree

print()

ID = []
IP_MIN = []
IP_MAX = []
tree = etree.parse("20190701_Exemple_Cfg_IP.xml")

for PLAGE in tree.xpath("/BDD_Cfg_Reseau/PLAGE"):
    ID.append(PLAGE.get('IDENTIFIANT'))
    IP_MIN.append(PLAGE.find('IP_MIN').text)
    IP_MAX.append(PLAGE.find('IP_MAX').text)

print(ID, IP_MIN, IP_MAX)
print()


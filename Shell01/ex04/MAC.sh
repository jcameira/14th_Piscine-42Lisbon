ifconfig | grep -Po 'ether \K.*(?=txqueuelen)' | sed 's/ *$//'

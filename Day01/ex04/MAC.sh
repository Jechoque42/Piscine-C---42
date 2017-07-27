ifconfig -a | grep "ether" | sed 's/ether//g' | cut -c 3- | tr -d " "

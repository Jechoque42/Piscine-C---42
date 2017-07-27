ldapsearch -x "uid=z*" | grep -i "^cn:" | sort -r | sed 's/cn: //g'

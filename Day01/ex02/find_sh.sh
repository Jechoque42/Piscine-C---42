find . -type f -name "*.sh" | sed 's/\.sh//g' | sed 's/\.\///g' | awk -F "/" '{print $NF}'

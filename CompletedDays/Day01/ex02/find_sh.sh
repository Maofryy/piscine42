find . -type f -name '*.sh' -print | awk -F / '{print $NF}' | rev | cut -c 4-  | rev 

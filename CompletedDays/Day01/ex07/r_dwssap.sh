cat /etc/passwd | grep -v "^#" | awk "NR%2==0" | cut -d : -f 1 | rev |  sort -r | awk "(NR)<=$FT_LINE2" | awk "(NR)>=$FT_LINE1" | sed "s/$/, /"| paste -s - | rev | cut -c 3- | rev | sed "s/$/./" | xargs echo -n
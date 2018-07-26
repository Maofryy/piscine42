stat -t "%m%d%H%M%S" bomb.txt | cut -d '"' -f 2 > time;
cat time | xargs echo "1 -" | bc | sed "s/^\s*./0/" > time;
echo $( <time ) | rev | cut -c 3- | rev > newtime;
echo . >> newtime;
echo $(< time ) | rev | cut -c 1-2 | rev >> newtime;
paste -sd "/" newtime | sed "s/\///g" > newtime;
touch -t "$( < newtime)" bomb.txt;

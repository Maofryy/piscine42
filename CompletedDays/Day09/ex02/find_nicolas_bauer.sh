rd.txt | grep '([0-9][0-9][0-9])' | grep '[0-9][0-9][0-9]' | grep -i ^Nicolas | grep -i Bauer | cut -d "(" -f 2 | cut -d n -f 1 | sed "s/)/-/" | sed "s/-//g"

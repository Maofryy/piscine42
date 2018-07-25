ldapsearch -LLL sn="*bon*" sn | grep ^sn: | cut -d ":" -f 2 | wc -l | sed "s/ //g"

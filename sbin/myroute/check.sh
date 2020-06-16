check_route()
{   
    dest=$1
    result=$(netstat -r --libxo json)
     
    # This query selects the JSON item from the array of rt-entry of IPv4 table   
    # for which the destination address is $dest      
    query=".statistics.\"route-information\".\"route-table\".\"rt-family\"[0].\"rt-entry\"[]|select(.destination==\"${dest}\")"
              
    # Gateway is then extracted from the JSON item as described above
    gateway=$(echo $result | jq -r ${query}.gateway)                                                                                   
    echo ${gateway}
}   	

myroute add 6.6.6.6 172.16.2.8
gateway=$(check_route "6.6.6.6")

if [ "${gateway}" != "172.16.2.8" ]; then
	echo "Failed to add new route."
else
	echo "Success"
fi

route delete 6.6.6.6

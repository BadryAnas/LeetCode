/* Write your T-SQL query statement below */


with t1 as
(
    select lat , lon
    from Insurance
    group by lat , lon
    having count(lat) = 1 and count(lon) = 1
)

select round(sum(tiv_2016 ) ,2)as tiv_2016 
from Insurance 
where tiv_2015 in 
(
    select tiv_2015
    from Insurance
    group by tiv_2015 
    having count(tiv_2015) != 1
) 
and  lat  in ( select lat from t1 )
and  lon  in ( select lon from t1 )
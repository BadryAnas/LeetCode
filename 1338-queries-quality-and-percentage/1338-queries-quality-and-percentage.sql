 select query_name , 
        round( avg ( rating * 1.0 / position ) , 2 ) as quality ,
        round( count(case when rating<3 then 1 else null end) * 100.0 / count(*) , 2) as poor_query_percentage 
from Queries
group by query_name 
having query_name is not null
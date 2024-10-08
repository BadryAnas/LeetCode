/* Write your T-SQL query statement below */
select sell_date ,  count(distinct product) as num_sold , string_agg(  product, ',') as products
from (
    select distinct sell_date ,  product
    from Activities
) as t
group by sell_date 

-- we use string agg with group by 
-- but use Concat without group by
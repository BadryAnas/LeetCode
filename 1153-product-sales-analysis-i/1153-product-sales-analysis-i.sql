/* Write your T-SQL query statement below */
select product_name  , year   , price 
from sales , product
where product.product_id   = sales.product_id
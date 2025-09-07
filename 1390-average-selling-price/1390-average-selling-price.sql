/* Write your T-SQL query statement below */
select P.product_id , ISNULL(Round( Sum(units * price) / (sum(units) * 1.0)  , 2), 0) as average_price
from UnitsSold U RIGHT Join Prices P
ON P.product_id = U.product_id and u.purchase_date BETWEEN p.Start_date and p.end_date
group by P.product_id
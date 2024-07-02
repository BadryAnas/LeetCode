/* Write your T-SQL query statement below */
select s.user_id ,
round(CAST(COUNT(CASE WHEN c.action = 'confirmed' THEN 1 ELSE  NULL END) AS FLOAT) / COUNT(*),2)as confirmation_rate
from Signups s left join Confirmations c
on s.user_id = c.user_id 
group by s.user_id


-- SELECT              s.user_id,
-- ROUND(CAST(COUNT(CASE WHEN action = 'confirmed' THEN 1 ELSE NULL END) AS FLOAT) / COUNT(*), 2) as confirmation_rate
-- FROM                Signups s
-- LEFT JOIN     Confirmations c
-- ON                  s.user_id = c.user_id
-- GROUP BY            s.user_id
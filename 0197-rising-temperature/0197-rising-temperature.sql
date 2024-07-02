/* Write your T-SQL query statement below */
select W2.id AS Id
from Weather W1 JOIN Weather W2
ON DATEDIFF(DAY ,W1.recordDate, W2.recordDate) = 1
where W1.temperature < W2.temperature  
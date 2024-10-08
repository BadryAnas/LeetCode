/* Write your T-SQL query statement below */
select *
from users
where right(mail, 13) = '@leetcode.com'
and left(mail, len(mail) - 13 ) like '[A-Za-z]%'
and left(mail, len(mail) - 13 ) not like '%[^a-zA-Z0-9._-]%'
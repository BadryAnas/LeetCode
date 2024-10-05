/* Write your T-SQL query statement below */
select distinct prev_word as ConsecutiveNums 
from 
(
    select  id,
            num,
            lag( num )  over (order by id ) as prev_word, 
            lead(num)   over (order by id ) as next_word
    from logs
) as newTable
where prev_word = next_word and next_word = num

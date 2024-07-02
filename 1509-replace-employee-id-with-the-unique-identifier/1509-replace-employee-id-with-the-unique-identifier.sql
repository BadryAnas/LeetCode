/* Write your T-SQL query statement below */
select unique_id  ,name     
from Employees E LEFT OUTER JOIN EmployeeUNI EI
ON E.ID = EI.ID  
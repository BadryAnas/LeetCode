select mngr.name   
from employee emp , employee mngr
where mngr.id = emp.managerId
group by mngr.id, mngr.name  
having count(emp.managerId) >= 5 

-----------------------------


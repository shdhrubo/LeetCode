# Write your MySQL query statement below
select n.unique_id,e.name
from Employees as e
Left Join EmployeeUNI as n on e.id=n.id;

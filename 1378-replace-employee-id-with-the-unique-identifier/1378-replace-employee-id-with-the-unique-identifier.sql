# Write your MySQL query statement below
select U.unique_id,name
from Employees as E
left join EmployeeUNI as U
on E.id=U.id;
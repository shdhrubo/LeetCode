# Write your MySQL query statement below
select C.name
from  Customer as C
where C.referee_id !=2 or C.referee_id is  null
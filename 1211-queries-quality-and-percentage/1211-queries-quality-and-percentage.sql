# Write your MySQL query statement below
select q.query_name,ROUND(sum(q.rating/q.position)/count(q.query_name),2) as quality, ROUND(sum(q.rating<3)*100/count(q.query_name),2) as poor_query_percentage 
from Queries as q
where q.query_name is not null
group by q.query_name
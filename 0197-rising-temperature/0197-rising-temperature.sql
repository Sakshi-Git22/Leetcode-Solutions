# Write your MySQL query statement below
with cte as (
    select *,
    lag(recordDate) over(order by recordDate) as prev_record,
    lag(temperature) over(order by recordDate) as prev_temp
    from Weather
)
select id
from cte
where
datediff(recordDate,prev_record)=1
and
prev_temp < temperature
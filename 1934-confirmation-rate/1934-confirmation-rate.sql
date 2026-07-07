# Write your MySQL query statement below
SELECT s.user_id,
round(
    IFNULL(sum(case when c.action = 'timeout' Then 0 ELSE 1 END)/count(c.action),0),2
    ) AS confirmation_rate
FROM
Signups as s
left join
Confirmations as c
on
s.user_id = c.user_id
group by
s.user_id
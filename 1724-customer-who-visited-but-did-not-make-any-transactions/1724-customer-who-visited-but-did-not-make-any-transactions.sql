# Write your MySQL query statement below
select customer_id, count(*) as count_no_trans
from visits s
left join transactions t
on s.visit_id=t.visit_id
where t.transaction_id is null
group by s.customer_id
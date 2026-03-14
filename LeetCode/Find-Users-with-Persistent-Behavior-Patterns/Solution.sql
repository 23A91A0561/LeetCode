1# Write your MySQL query statement below
2select user_id,action,count(action_date) as streak_length,min(action_date) as start_date,max(action_date) as end_date
3from
4activity
5group by user_id,action
6having count(action_date)>=5
7order by streak_length desc;